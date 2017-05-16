/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 1:00 PM
  Purpose: This Program will determine which geographical location had the fewest
 * reported accidents.
 */

//System Libraries
#include <iostream>

using namespace std;
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
int North, South, East, West, Central;
cout<< "\nThis program will determine which region\n";
cout<< "had the fewest reported traffic accidents.\n";
cout<< "------------------------------------------\n\n";
North = getNumAccidents("North");
South = getNumAccidents("South");
East = getNumAccidents("East");
West = getNumAccidents("West");
Central = getNumAccidents("Central");
findLowest(North, South, East, West, Central);
return 0;
}
int getNumAccidents(string Region)
{
int Accidents;
   do
{
    cout<< "How many traffic accidents were reported in\nthe ";
    cout<< Region << " region during last year? ";
    cin>> Accidents;

   if (Accidents < 0)
{
    cout<< "\nInvalid Entry, Try Again.\n";
    cout<< "Accident number must be greater than 0.\n";
}
} 
while (!(Accidents > 0));
    cout<< endl;
return Accidents;
}
void findLowest(int North, int South, int East, int West, int Central)
{
int Lowest;
cout<< "\nThe fewest reported traffic accidents last year were reported in\nthe ";
    if(North < South   &&
	North < East    &&
	North < West    &&
	North < Central)
{
        Lowest = North;
	cout << "North ";
}
    else if(South < North   &&
	South < East    &&
        South < West    &&
	South < Central)
{
	Lowest = South;
	cout << "South ";
}
    else if(East < North   &&
	East < South   &&
	East < West    &&
	East < Central)
{
	Lowest = East;
        cout << "East ";
}
    else if(West < North   &&
	West < East    &&
	West < South   &&
	West < Central)
{
        Lowest = West;
	cout << "West ";
}
    else
{
	Lowest = Central;
	cout << "Central ";
}

	cout << "region which had " << Lowest << " reported traffic accidents.\n\n";
}