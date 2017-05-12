#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer : public Person{
private:

	Customer(int age, double wallet, string favGenre);

	//if age >= 55 - $8,
	//	 age < 55 - $20,
	//	 age < 21 - $16, 
	//	 age < 12 - $12,

	//NULL as not member yet.
	int ID;

	//increments on every assignID();
	static int uniqueID;

	//customer's spending power
	double wallet;

	//membership status
	bool member;

	//group of people that will pay together
	Customer group[]; 

	//return whether the customer has paid.
	bool paid;

	//customers choice of food. either: "popcorn" - $5, "softdrinks" $2, "chips" $3.99, "sweets" $.99
	//each type has one size, thus it has one price.
	string food[];

	//favGenre affects customers decision. 
	//if there is a movie playing "favGenre" customer will buy tickets to that movie
	//Horror, Action, Family, Romance, Comedy.
	string favGenre;

	//price includes cost of membership, food, and tickets requested
	double price;

	//change status of membership. only set to true. membership is for lifetime
	void setMember();

	//sets total due to "paid". only set to true.
	void setPaid();

	//returns amount of money in wallet
	double getWallet();
	
	//Pays "price" with "wallet". if insufficient funds, customer does not buy - return false
	//uses getwallet - getprice. if > 0, setpaid = true
	bool pay();

	//returns total due
	double getPrice();

	//calc membership, food and ticket price as a subtotal
	void setPrice();


	//assign id to new member, increments uniqueID by one per use assign to ID.
	int assignID();

	//destructor
	~Customer();

};

#endif