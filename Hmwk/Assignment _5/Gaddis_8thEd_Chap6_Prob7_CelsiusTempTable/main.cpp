/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 2, 2017, 6:15 PM
  Purpose: This Program will generate a Fahrenheit to Celsius Temperature Table
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

double celsius(int);

int main()
{
cout<< "\nFahrenheit temperatures 0 - 20\n";
cout<< "and their Celsius equivalents.\n\n";
cout<< "------------------------------\n";
cout<< "  Fahrenheit       Celsius\n";
cout<< "------------------------------\n";

for (int F = 0; F <= 20; F++)
{
    cout << "      " << setw(2) << F;
    cout << "          "<< setw(3) << celsius(F) << endl;
}
    cout << endl;
    return 0;
}
double celsius(int F)
{
	
	return (5.0 * (F - 32))/9;
}