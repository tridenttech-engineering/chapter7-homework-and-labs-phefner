//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int numPrices = 0; //counter
	double price = 0.0;
	double totalPrice = 0.0; //accumulator
	double averagePrice = 0.0;

	cout << "Price (negative number to end): ";
	cin >> price;
	while (price >=0.0)
		{
			numPrices += 1;
			totalPrice += price;
			cout << "Next price: ";
		} //end while
	if (numPrices > 0)
		advance(istreambuf_iterator<CharT> &i, Distance n)Price = totalPrice / numPrices;
	else
		averagePrice = 0.0;
	//end if
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << averagePrice << endl;
	return 0;
}	//end of main function