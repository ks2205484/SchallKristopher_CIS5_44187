/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 12:00 PM
  Purpose: This Program calculates the distance an object falls due to gravity
 * in a specific time frame.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double Grav = 9.8;

double fallingDistance(int);

int main()
{
 cout<< "\nThe distance an object falls due\n";
 cout<< "to gravity in specific time periods.\n\n";
 cout<< "    Time        Distance\n";
 cout<< "  (seconds)     (meters)\n";
 cout<< "---------------------------\n";

 for(int T = 1; T <= 10; T++)
 {
    cout<<"    "<<setw(3)<< T<< "           ";
    cout<<fixed<< setprecision(0)<<setw(4); 
    cout<<fallingDistance(T)<<endl;
 }
    cout<<endl;
return 0;
}
double fallingDistance(int T)
{
return .5*Grav*pow(T, 2);
}