////
// Silvia Moreno
// CS-171
//HW 12.25"New Account Class"
//10/31/16
////

#include <iostream>
#include <string> //allows the string to work
#include <vector> //allows the vectors to work
#include <ctime>
#include <cstdlib>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date()
	{
		//set the date at random
		setDate(time(0));
	}

	Date(int elapseTime)
	{ //set the date in an elapse time
		setDate(elapseTime);
	}

	Date(int y, int m, int d)
	{ //set the private variables equal to the parameter
		year = y;
		month = m;
		day = d;
	}

	void setDate(int elapseTime)
	{ //determines what classifies as seconds, minutes, hours and a day
		long seconds = elapseTime;
		long minutes = seconds / 60;
		long hours = minutes / 60;
		day = hours / 24;
	}

	int getYear()
	{
		return year;
	}

	int getMonth()
	{//returns the day
		return month;
	}

	int getDay()
	{
		return day;
	}

};

class Transaction {
private:
	//callss the class date in a vector
	vector<Date> date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction() {
		//default is calling the balance function
		getBalance();
	}
	Transaction(char type, double amount, double balance, string description) {
		
		this->type = type;
		this->amount = amount;
		this->balance = balance;
		this->description = description;
	}
	double getAmount() {
		return amount;
	}
	double setAmount() {
		int newAmount;
		newAmount= amount;
		return newAmount;
	}
	char getType() {
		//returns the type
		return type;
	}
	char setType() {
		// if the new amount is greater than the old amount then it is deposit
		int newAmount;
		if (newAmount > amount)
			type = 'D';
		else
			type = 'W';
	}
	double getBalance() {
		//returns the balance
		return balance;
	}
	double setBalance() {
		int newBalance;
		//the new balance is equal to the old balance
		newBalance = balance;
		return newBalance;
	}
	string getDescription() {
		return description;
	}

};

class Account {
private:
	//calls the vector Transaction class
	vector<Transaction*> transaction;
public:
	int id;
	double balance;
	double annualInterestRate;
	string name;
	
	Account() {
		//default account
		name = "George";
		id = 1122;
		balance = 1000;
		annualInterestRate = 1.5;

	}

	Account(string name, int id, double balance, double annualInterestRate) {
		//this pointer sets the class variables to the parameters 
		this->name = name;
		this->id = id;
		this->balance = balance;
		this->annualInterestRate = annualInterestRate;
	}
	double getBalance() {
		return balance;
	}
	string getName() {
		return name;
	}
	double InterestRate() {
		//returns the interest rate
		return annualInterestRate;
	}
	int getID() {
		//returns the id
		return id;
	}
	double getNewBalance() {
		double newBalance;
		newBalance = getBalance(); //the new balance is set to the old balance
		return newBalance; //returns the new balance
	}
	int withdrawAmount(int input) {
			int newAmount;
			// the new amount is the newbalance - the input 
			newAmount = getNewBalance() - input;
			//returns the newamount
			return newAmount;
	}
	int depositAmount( int input) {
		int newAmount;
		//new amount is equal to new blanace + the input
		newAmount = getNewBalance() + input;
		//returns that new amount
		return newAmount;
	}

};


int main() {
	//calls the class account
	Account account;
//calls the name, id, balance, and annual interest rate on the account
	cout << "The name on the account is: " << account.getName() << endl;
	cout << "The annual interest rate is: " << account.InterestRate()<< endl;
	cout << "The initial balance is: " << account.getBalance() << endl;
	cout << account.getName() << "'s ID is: " << account.getID() << endl;
	//calls the deposit function with the amount being deposited
	cout << account.depositAmount(30) << endl;
	cout << account.depositAmount(40) << endl;
	cout << account.depositAmount(50) << endl;
	//calls the withdraw amount with the amount being deposited
	cout << account.withdrawAmount(5) << endl;
	cout << account.withdrawAmount(4) << endl;
	cout << account.withdrawAmount(2) << endl;



}