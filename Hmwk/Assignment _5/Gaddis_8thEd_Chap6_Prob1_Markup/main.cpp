/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 7:00 PM
  Purpose: This Program will calculate and display the retail price of an item.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
double calculateRetail();
int main()
{
double RetalPrice;
cout<<"This program calculates and displays the retail price of an item.\n";
RetalPrice = calculateRetail();
cout<<fixed<<showpoint<<setprecision(2);
cout<<"The retail price of the item is $"<<RetalPrice<<endl;
return 0;
}
double calculateRetail()
{
double Cost,Markup;
do
{
cout<<"What is the item's wholesale cost? $";
cin>>Cost;
    if (Cost < 0)
{
    cout<<"Error!\n";
    cout<<"Wholesale cost must be a positive number.\n";
}
} 
while (!(Cost > 0));
    do
{
    cout<<"What is the item's markup percentage? ";
    cin>>Markup;
    if (Markup < 0)
{
    cout<<"Error!\n";
    cout<<"The markup percentage must be a positive number.\n";	
}
}
    while (!(Markup > 0));
Markup /= 100;
return Cost * (1 + Markup);
}