package com.turnalan;

public class events {

	public String type;
	public String ts;
	public String name;
	public custom_params custom_params;

	public events() {

	}

	public events(String type, String ts, String name, custom_params custom_params) {
		this.type = type;
		this.ts = ts;
		this.name = name;
		this.custom_params = custom_params;
	}

	public String getType() {
		return type;
	}

	public void setType(String type) {
		this.type = type;
	}

	public String getTs() {
		return ts;
	}

	public void setTs(String ts) {
		this.ts = ts;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public custom_params getCustom_params() {
		return custom_params;
	}

	public void setCustom_params(custom_params custom_params) {
		this.custom_params = custom_params;
	}
	
	@Override
	public String toString() {
		return type + " " + ts + " " + name + " " + custom_params;
	}

}
