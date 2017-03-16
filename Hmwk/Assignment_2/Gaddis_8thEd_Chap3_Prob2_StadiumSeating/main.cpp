/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 4:45 PM
 * Purpose:How many tickets were sold for each class of Stadium Seats
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double classA=15, classB=12, classC=9;
    double numberA, numberB, numberC;
    double total;
    //Initialize variables
    
    //Input data
    cout<<"How many tickets were sold for Class A seating: ";
    cin>>numberA;
    cout<<"How many tickets were sold for Class B seating: ";
    cin>>numberB;
    cout<<"How many tickets were sold for Class C seating: ";
    cin>>numberC;
    //Map inputs to outputs or process the data
    total=(numberA*classA)+(numberB*classB)+(numberC*classC);
    //Output the transformed data
    cout <<showpoint;
    cout <<setprecision(2)<<fixed;
    cout <<"Sales from Class A seating: $  " << numberA*classA << endl;
    cout <<"Sales from Class B seating: $  " << numberB*classB << endl;
    cout <<"Sales from Class C seating: $  " << numberC*classC << endl;
    cout << "Total sales generated: $ " << total << endl << endl;
    //Exit stage right!
    return 0;
}

