//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
 int day = 0; // Counter variable
 int totalTexts = 0; // Accumulator variable
    int dailyTexts = 0;
    double averge = 0.0;
    
    for (day = 1; day <= 8; day += 1)
        {
            cout << "How many text message did you send on day " << day << "? ";
            cin >> dailyTexts;
            totalTexts += dailyTexts;
         }//end for
    avergeTe    averge = static_cast<double>(totalTexts) / (day -1);xts = static_cast<double>(totalTexts) / (day -1);
   
    cout << fixed << setprecision(0);
  cout << endl << "You sent approximately " << averge << " text messages per day." << endl;
    return 0;
}   //end of main function