/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 13, 2017, 3:15 PM
  Purpose: This Program will generate how many pounds of food a monkeys can consume in a week.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {

const int mkys = 3;
const int days = 7;
int food[mkys][days];
double pounds, least, most, sum = 0;
	
    cout<<"Input how many pounds of food each monkey ate each day.\n";
	for (int row = 0; row < mkys; row++)
	{
            for (int col = 0; col < days; col++)
            {
		do
		{
                cout<<"Monkey #"<<(row + 1)<<" on day #"<<(col + 1);
		cout<<" ate: ";
		cin  >> pounds;

		if (pounds < 0)
		{
		cout<<"Error! Number of pounds must be greater than 0.\n";
                }
                }
                while (pounds < 0);
                food[row][col] = pounds;
                sum += pounds;
		}
		cout<<endl;							
	}
        least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
            for (int col = 0; col < days; col++)
            {
                if (food[row][col] < least)
		{ 
		least = food[row][col];
		}
		if (food[row][col] > most)
		{ 
		most = food[row][col];
		}
	}
}

cout<< "\n              Weekly Food Report\n";
cout<< "----------------------------------------------------\n";
cout<<fixed<<showpoint<<setprecision(1);
cout<<"Average amount of food eaten per day : "<<sum / 21.0<<" lbs.\n";
cout<<"Least amount of food eaten: "<<least<<" lbs.\n";
cout<<"Greatest amount of food eaten: "<<most<<" lbs.\n";

	return 0;
}