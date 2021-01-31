// #30 Problem, Available credit
// This progam displays available credit.
#include <iostream>
using namespace std;

int main()
{
	double max_credit, used_credit, credit;

	// Get the maximum credit from user.
	cout << "Enter the customer's maximum credit: ";
	cin >> max_credit;

	// Get the used credit from user.
	cout << "Enter the amount of credit used by the customer:  ";
	cin >> used_credit;

	// Calculate the credit amount.
	credit = max_credit - used_credit;

	// Display the customer's available credit.
	cout << "The customer's available credit is: " << credit << endl;
	return 0;
}