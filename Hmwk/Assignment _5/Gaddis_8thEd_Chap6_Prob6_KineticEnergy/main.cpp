/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 12:30 PM
  Purpose: This Program will calculate the kinetic energy an object has.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double kineticEnergy(int, int);

int main()
{
int Mass,Velocity;		
cout<<"\nThis program will calculate the amount\n";
cout<<"of kinetic energy an object has (in joules).\n";
cout<<"-----------------------------------------\n";
cout<<"Enter the object’s mass (in kilograms): ";
cin>>Mass;
cout<<"Enter the object’s velocity (in meters per second): ";
cin>>Velocity;
cout<<"------------------------------------------\n";
cout<<"This object has a kinetic energy of "<< kineticEnergy(Mass, Velocity) << " joules." << endl;
return 0;
}
double kineticEnergy(int Mass, int Velocity)
{   
return .5 * Mass * pow(Velocity, 2);
}