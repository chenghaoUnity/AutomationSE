package com.turnalan;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;

import org.json.JSONArray;
import org.json.JSONObject;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

@RestController
@EnableAutoConfiguration
public class StandardEventServerApplication {

	HashMap<String, ArrayList<String>> hashMap = new HashMap<String, ArrayList<String>>();
	HashMap<String, Integer> limitTable = new HashMap<String, Integer>() {{
		put("post_install_action", 2);
		put("tutorial_start", 2);
		put("tutorial_step", 2);
		put("tutorial_complete", 2);
		put("tutorial_skip", 2);
		put("store_opened", 1);
		put("store_item_click", 2);
		put("currency_acquired", 2);
		put("consumable_acquired", 1);
		put("consumable_spent", 2);
		put("item_acquired", 2);
		put("ad_offer", 4);
		put("ad_start", 4);
		put("ad_complete", 4);
		put("ad_skip", 4);
		put("post_ad_action", 4);
		put("screen_visit", 1);
		put("cutscene_skip", 1);
		put("game_start", 1);
		put("game_over", 4);
		put("level_start", 3);
		put("level_complete", 3);
		put("level_fail", 3);
		put("level_quit", 3);
		put("level_skip", 3);
		put("level_up", 3);
		put("push_notification_enable", 1);
		put("push_notification_click", 1);
		put("chat_msg_sent", 1);
		put("achievement_unlocked", 1);
		put("achievement_step", 1);
		put("user_signup", 1);
		put("social_share", 1);
	}};
	
	@RequestMapping(value = "/events/summary", method=RequestMethod.GET)
    void okay() {
		for (String key : hashMap.keySet()) {
			
			System.out.println(key);
			
			for (int i = 0; i < hashMap.get(key).size(); i++) {
				System.out.println(hashMap.get(key).get(i));
			}
			
			System.out.println();
		}
    }
	
	@RequestMapping(value = "/events/check", method=RequestMethod.GET)
    String checker() {
		
		if (hashMap.keySet().size() != 34) {
			return "Not ready";
		}
		
		for (String key : hashMap.keySet()) {
			
			if (hashMap.get(key) == null || hashMap.get(key).size() == 0) {
				return "Not ready";
			}
			
			if (limitTable.containsKey(key)) {
				if (hashMap.get(key).size() < limitTable.get(key)) {
					return "Not ready";
				}
			}
			
		}
		
    	return "Ready";
    }
	
    @RequestMapping(value = "/events/{name}/{order}", method=RequestMethod.GET)
    String getEvent(@PathVariable String name, @PathVariable int order) {
    	if (!hashMap.containsKey(name)) {
    		return "none";
    	}
    	
    	if (order >= hashMap.get(name).size()) {
    		return "none";
    	}
    	
    	return hashMap.get(name).get(order);
    }
    
    @RequestMapping(value = "/events/size", method=RequestMethod.GET)
    String getSize() {
    	return String.valueOf(hashMap.size());
    }
    
    
    @RequestMapping(value = "/events", method=RequestMethod.POST)
    String postEvent(@RequestBody String string)  {
    	
    	try{
    	
	        JSONObject obj = new JSONObject(string); 
			JSONArray array = obj.getJSONArray("events");
			
			for (int i = 0; i < array.length(); i++) {
				
				try {
				
					JSONObject entry = array.getJSONObject(i);
					
					String type = entry.getString("type");
					
					if (type.equals("custom")) {
						
						String name = entry.getString("name");
						if (name.contains("unity.")) {
							name = name.split("unity.")[1];
						}
						
						String custom_params = null;
						if (entry.has("custom_params")) custom_params = entry.getString("custom_params");
						
						if (!hashMap.containsKey(name)) {
							hashMap.put(name, new ArrayList<String>());
							hashMap.get(name).add(custom_params);
							continue;
						}
						
						if (hashMap.get(name).size() > limitTable.get(name)) {
							continue;
						}
						
						if (hashMap.get(name).contains(custom_params)) {
							continue;
						}
						
						hashMap.get(name).add(custom_params);
					}
				
				} catch(Exception e) {}
			}
    	} catch (Exception e) {}
    	
    	return "success";
    }
	
	public static void main(String[] args) {
		SpringApplication.run(StandardEventServerApplication.class, "--server.port=8081");
	}
}
