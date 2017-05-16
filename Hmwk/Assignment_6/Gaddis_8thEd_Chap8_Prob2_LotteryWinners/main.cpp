/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 13, 2017, 8:15 PM
  Purpose: This Program will let you know if you are a Lottery Winner.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int searchList(int [], int, int);
int main()
{
const int NUMS=10;
int Picks[NUMS]={ 13579, 26791, 26792, 33445, 55555,
                  62483, 77777, 79422, 85647, 93121 };
int WinNums, Search;			
    cout<<"Enter this week’s winning five-digit number: ";
    cin>>WinNums;
    Search = searchList(Picks, NUMS, WinNums);

    if (Search == -1)
	cout<<"Sorry, no winning ticket this week.\n";
    else
    {
	cout<<"Congratulations!\nYou have the winning numbers: " 
	<<Picks[Search]<< endl;
    }

    return 0;
}
int searchList(int list[], int size, int value)
{
    int index = 0;			
    int position = -1;		
    bool found = false;		
        while (index < size && !found)
	{
            if (list[index] == value)	
            {
            position = index;		
            found = true;			
            }
	index++;					
    }
return position;				
}