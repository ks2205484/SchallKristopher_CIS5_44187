/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 5:30 PM
  Purpose: Line up the students by alphabetical order.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    	int Roll;
	string Name, Front, End;
	
    //Input values
    cout<<"\nThis is a program that reports which student would be at the front of\n";
    cout<<"the line and which one would be at the end of the line.\n\n";
    cout<<"How many students are in the class? ";
    cin>>Roll;
    cout<<"***************************************\n";
    while (Roll<1||Roll>25)
    {
    cout<<"\nError!\nThe number of students in the class must\n";
    cout<<"be greater than 1 or less than 25.\n\n";
    cout<<"How many students are in the class? ";
    cin>>Roll;
    }
    cout<<"Enter the first name of a student: ";
    cin>>Name;

    Front=End=Name;

    for (int Count=1; Count<Roll; Count++)
    {
    cout<<"Enter the first name of the next student: ";
    cin>>Name;

    if (Name>End)
    End=Name;
    if (Name<Front)
    Front=Name;
    }
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"**************************************\n";
    cout<<endl<<Front<<" is at the front of the line and\n";
    cout<<End<<" is at the end of the line.\n";
    //Exit stage right!
    return 0;
}