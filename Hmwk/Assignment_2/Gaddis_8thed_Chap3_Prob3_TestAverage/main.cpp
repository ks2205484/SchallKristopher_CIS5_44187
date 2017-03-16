/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 1, 2017, 5:00 PM
 * Purpose: Calculate average test scores
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
    double score1, score2, score3, score4, score5, average;
    //Initialize variables
    
    //Input data
    cout<<"Enter score 1: ";
    cin>>score1;
    cout<<"Enter score 2: ";
    cin>>score2;
    cout<<"Enter score 3: ";
    cin>>score3;
    cout<<"Enter score 4: ";
    cin>>score4;
    cout<<"Enter score 5: ";
    cin>>score5;
    //Map inputs to outputs or process the data
    average=(score1+score2+score3+score4+score5)/5;
    //Output the transformed data
    cout<<setprecision(1)<<fixed;
    cout<<"The Average score is: "<<average<<endl;
    //Exit stage right!
    return 0;
}

