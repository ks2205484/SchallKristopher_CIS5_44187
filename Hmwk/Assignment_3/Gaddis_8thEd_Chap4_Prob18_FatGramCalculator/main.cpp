/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 8:00 PM
 * Purpose: Calculate the Percentage of Calories from Fat.
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
    double calories, fatgrams, fatcalories;
    double lowfat;
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of calories in food: ";
    cin>>calories;
    if(calories < 0)
    {cout<<"Calories cannot be less than 0 \n";
    cout<<"Enter calories again: ";
    cin>>calories;}
    cout<<"Enter the number of grams of fat in food: ";
    cin>>fatgrams;
    if(fatgrams<0||fatgrams>calories)
    {cout << "\nGrams of Fat cannot be less than 0 or greater than calories \n";
    cout<<"Enter the grams of fat again: ";
    cin>>fatgrams;}
    //Map inputs to outputs or process the data
    fatcalories=fatgrams*9;
    lowfat=fatcalories/calories;
    //Output the transformed data
    cout<<setprecision(2)<<fixed;
    cout<<"\n+++++++++++++++++++++++++++++++++\n";
    cout<<"Calories from fat: "<<lowfat*100<<"%"<<"\n\n";
    if(lowfat<0.30)
    cout<<"This food is low in fat \n\n";
    //Exit stage right!
    return 0;
}

