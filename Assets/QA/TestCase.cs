
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestCase {

	private string descitpion;
	private bool result;
	private string failReason;
	private System.DateTime date;

	public TestCase() {
	}

	public TestCase(string descitpion, bool result, string failReason, System.DateTime date) {
		this.failReason = failReason;
		this.result = result;
		this.descitpion = descitpion;
		this.date = date;
	}

	public string getFailReason() {
		return failReason;
	}

	public bool getResult() {
		return result;
	}

	public string getDescitpion() {
		return descitpion;
	}

	public System.DateTime getDate() {
		return date;
	}
}