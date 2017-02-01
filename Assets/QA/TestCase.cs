
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestCase {

	private string descitpion;
	private bool result;
	private string failReason;
	private System.DateTime date;
	private string caseLink;

	public TestCase() {
	}

	public TestCase(string descitpion, bool result, string failReason, System.DateTime date, string caseLink) {
		this.failReason = failReason;
		this.result = result;
		this.descitpion = descitpion;
		this.date = date;
		this.caseLink = caseLink;
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

	public string getCaseLink() {
		return caseLink;
	}
}