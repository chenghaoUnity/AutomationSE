using UnityEngine;
using System.Collections;

public class Proxy : MonoBehaviour {
	public bool imaserver;
	public string serverIP;
	public int serverPort;
	public bool serverUsesNAT;
	void Awake() {
		Network.proxyIP = "1.1.1.1";
		Network.proxyPort = 1111;
		if (imaserver)
			StartServerWithProxy();
		else
			ConnectToServerWithProxy();
	}
	void StartServerWithProxy() {
		Network.useProxy = true;
		Network.InitializeServer(2, 25000, false);
	}
	void OnServerInitialized(NetworkPlayer player) {
		if (Network.useProxy)
			Debug.Log("Successfully started server with proxy support. We are connectable through " + player.ipAddress + ":" + player.port);

	}
	void OnFailedToConnect(NetworkConnectionError msg) {
		if (Network.useProxy && imaserver)
			Debug.LogError("Failed to connect to proxy server: " + msg);

	}
	void ConnectToServerWithProxy() {
		Network.useProxy = true;
		Network.Connect(serverIP, serverPort);
	}
	void OnConnectedToServer() {
		Debug.Log("Connected successfully to server");
	}
}