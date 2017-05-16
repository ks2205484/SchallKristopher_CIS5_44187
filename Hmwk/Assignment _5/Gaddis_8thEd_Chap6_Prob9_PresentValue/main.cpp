/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 2:30 PM
  Purpose: This Program will generate how much money you need to deposit to attain
 * a future balance after a set number of years.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double presentValue(double, double, int);

int main()
{
double CurrentBalance,FutureBalance,IRate;
int Yrs;

cout<<"\nThis Program will calculate how much money you should deposit\n";
cout<<" into your account to have an amount of money after a set number of years\n";
cout<<"--------------------------------------------------------\n";
cout<<"What is the future balance you want in your account? ";
cin>> FutureBalance;
cout<<"What is your annual interest rate % ? ";
cin>> IRate;
cout<<"How many years do you plan to let the money sit in your account? ";
cin>> Yrs;
CurrentBalance = presentValue(FutureBalance, IRate, Yrs);
cout<<fixed<<showpoint<<setprecision(2);
cout<< "You need to deposit $"<<CurrentBalance<< " to have a balance of $";
cout<<FutureBalance<<" in "<<Yrs<<" years.\n\n";
return 0;
}
double presentValue(double FutureBalance, double AIRate, int Yrs)
{
return FutureBalance / pow(1 + AIRate, Yrs);
}