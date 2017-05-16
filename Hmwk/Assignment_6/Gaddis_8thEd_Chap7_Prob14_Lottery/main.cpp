/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 13, 2017, 5:15 PM
  Purpose: This Program will simulate a lottery game
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
int winningDigits[5];
int player[5];
int digit, match = 0;

srand(time(NULL));					
    for (int i = 0; i < 5; i++)
	{
        winningDigits[i] = 0 + rand() % 9;
	} 
	cout<<"Enter your 5 lottery picks in the range of 0 to 9,\n";
        cout<<"one number at a time.\n";
	for (int i = 0; i < 5; i++)
	{
            do
            {
            cout<<"Number "<<(i + 1)<<": ";
            cin>>digit;
            if (digit < 0 || digit > 9)
            {
            cout<<"Invaild number!\n";
            cout<<"Pick a number in the range of 0 to 9.\n";
            }
	}
            while (digit < 0 || digit > 9);
            player[i] = digit;
	}
	for (int i = 0; i < 5; i++)
	{
            if (winningDigits[i] == player[i])match++;
	}
	cout<<"Winning numbers : ";
	for (int i = 0; i < 5; i++)
	{
	cout<<winningDigits[i]<<" ";
	}
	cout<<endl;
	cout<<"player numbers  : ";
	for (int i = 0; i < 5; i++)
	{
	cout<<player[i]<<" ";
	}
	cout << endl;

	cout << "Matching numbers: " << match << endl;

	return 0;
}