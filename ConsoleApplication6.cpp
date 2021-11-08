
#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	cout << "************************************************"
		"\nITCS 2530 - Programming Assignment for week #3 "
		"\n**************************************************";
	char fragile;
	string name, destination;
	double charge = 0.0, total;
	// Sowing output for name of a item aligned from right.
	cout << "\n\n\nPlease enter the item name (no spaces )" << right << setfill('.')
		<< setw(31)<<":";
	// Taking input for the name
	cin >> name;
	// Sowing output asking if the item is fragile or not, aligned from right.
	cout << "Is the item fragile? ( y= yes / n =no)" << right << setfill('.')
		<< setw(32) << ":";
	//Taking input for the fragile option.
	cin >> fragile;
	// if the input is Y or y it is fragile and $2 will be added to the charge.
	if (fragile == 'Y' || fragile == 'y')
	{
		charge = charge + 2;
	}
	// if the input is N or n it is fragile and the charge will be 0.
	else if (fragile == 'n' || fragile == 'N')
		charge = 0.0;
	// if the input is not either N,n or Y,y it will show Invalid Entry.
	else
	{
		cout << "Invalid Entry, exiting " << endl;
		system("pause");

	}
	// showing output for asking the order total aligned to the right
	cout << "Please Enter order total " << right << setfill('.')
		<< setw(45) << ":";
	//Taking input for order total.
	cin >> total;
	// showing output for asking the destination aligned to the right
	cout << "Please enter destination. (usa/can/aus/moon)" << right << setfill('.')
		<< setw(26) << ":";
	//Taking input for order total.
	cin >> destination;

	
	// If the destination is USA the following order of direction occurs
	if (destination == "usa")
	{
		//if the total is under $50 there will be $6.00 added
		if (total < 50.00)
			charge = charge + 6.00;
		//if the total is more than $50 and less than $100.01 there will be $9.00 added
		else if (total > 50.00 || total < 100.01)
			charge = charge + 9.00;
		//if the total is more than $100 and less than $150.01 there will be $12.00 added
		else if (total > 100.00 || total < 150.01)
			charge = charge + 12.00;
		//if the total is more than $150 there will be $0.00 added
		else
			charge = 0.0;
	}
	// If the destination is CAN the following order of direction occurs
	if (destination == "can")
	{
		//if the total is under $50 there will be $8.00 added
		if (total < 50.00)
			charge = charge + 8.00;
		//if the total is more than $50 and less than $100.01 there will be $12.00 added
		else if (total > 50.00 || total < 100.01)
			charge = charge + 12.00;
		//if the total is more than $100 and less than $150.01 there will be $15.00 added
		else if (total > 100.00 || total < 150.01)
			charge = charge + 15.00;
		//if the total is more than $150 there will be $0.00 added
		else
			charge = 0.0;
	}
	// If the destination is AUS the following order of direction occurs
	if (destination == "aus")
	{
		//if the total is under $50 there will be $10.00 added
		if (total < 50.00)
			charge = charge + 10.00;
		//if the total is more than $50 and less than $100.01 there will be $14.00 added
		else if (total > 50.00 || total < 100.01)
			charge = charge + 14.00;
		//if the total is more than $100 and less than $150.01 there will be $17.00 added
		else if (total > 100.00 || total < 150.01)
			charge = charge + 17.00;
		//if the total is more than $150 there will be $0.00 added
		else
			charge = 0.0;
	}
	//If the destination is moon the following order of direction occurs
	if (destination == "moon")
	{
		//if the total is under $50 there will be $15.00 added
		if (total < 50.00)
			charge = charge + 15.00;
		//if the total is more than $50 and less than $100.01 there will be $20.00 added
		else if (total > 50.00 || total < 100.01)
			charge = charge + 20.00;
		//if the total is more than $100 and less than $150.01 there will be $25.00 added
		else if (total > 100.00 || total < 150.01)
			charge = charge + 25.00;
		//if the total is more than $150 there will be $0.00 added
		else
			charge = 0.0;
	}
	//calculationg total by adding charges with it.
	total = total + charge;
	//output for the order name aligned from right.
	cout << "\nYour item is " << setfill('.') << right
		<< setw(41) << name << '\n';
	//output for the shipping cost aligned from right.
	cout << "Your shipping cost is " << right << setfill('.')
		<< setw(29) <<"$"<<charge << endl;
	//output for the shipping destination aligned from right.
	cout << "You are shipping to" << setfill('.') <<right
		<< setw(35) << destination << endl;
	//output for the total shipping cost aligned from right with 2 digits after decimal point.
	cout << "Your total shipping costs are"<< right << setfill('.')
		<< setw(22) << "$" << fixed << setprecision(2) << total << endl;
	// showing output of thank you
	cout << right << setfill('-')
		<< setw(61)<<"Thank you !" << endl;
	system("pause");


}
