// #31 Sales Tax

#include <iostream>
using namespace std;

int main()
{
    float retail_price, tax_rate;

    // Ask the user for the retail price of the item being purchased.
    cout << "Enter the retail price of the purchased item: ";

    // Reads the user input
    cin >> retail_price;

    // Ask user for the sales tax rate
    cout << "Enter the sales tax rate: ";

    // Reads the user input
    cin >> tax_rate;

    if (retail_price > 0 && tax_rate > 0) {

        // Calculates the total of retail sale.
        float tax_sales = retail_price * tax_rate / 100.0;
        float total = retail_price + tax_sales;

        cout << "The sales tax for the purchase is: " << tax_sales << endl;
        cout << "The total of the sale is: " << total << endl;
    }
    else
        cout << "Oh no, there was an error. Please enter data again." << endl;
}

