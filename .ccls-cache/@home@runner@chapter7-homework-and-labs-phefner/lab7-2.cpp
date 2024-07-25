//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Define variables
    double currentSalesAmount;
    double commissionRate;
    double commission;

    // Prompt the user for input
    cout << "Enter the current sales amount: ";
    cin >> currentSalesAmount;

    // Determine the commission rate based on the sales amount if (currentSalesAmount >=0 && currentSalesAmount < 5000) {
    commissionRate= 0.08;
    } else if (currentSalesAmount >= 5000 && currentSalesAmount < 10000)

    } else {
        commissionRate = 0.12;
        
    }
    // Calculate the commission
    commission = currentSalesAmount * commissionRate;

    // Display the commission
    cout << "The commission on $" << currentSalesAmount << " sales is $" << commission << endl;"
    
    return 0;
//end of main function
}
