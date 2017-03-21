/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 7:30 PM
 * Purpose: Calculate the Shipping Weight.
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
    double weight, distance, weightCharge, milesCharge, totalCharge;
    //Initialize variables
    
    //Input data
    cout<<"Enter the weight of the package (in Kilograms): ";
    cin>>weight;

    cout<<setprecision(2)<<fixed;
    //Map inputs to outputs or process the data
    if(weight<=0||weight>20)
    {cout << "Sorry, we cannot ship your package. \n";
    cout<< "The weight has to be greater than 0 KG and less than 20 Kg. \n";}
    else
    {cout<<"Enter the distance to be shipped (miles): ";
    cin>>distance;
    if(distance<10||distance>3000)
    {cout<<"Sorry, we cannot ship your package. \n";
    cout<<"The distance has to be between 10 - 3,000 miles. \n";}

    if(weight<=2)
    milesCharge=(distance/500)*1.10;
    if(weight>2&&weight<=6)
    milesCharge=(distance/500)*2.20;
    if(weight>6&&weight<=10)
    milesCharge=(distance/500)*3.70;
    if(weight>10&&weight<=20)
    milesCharge=(distance/500)*4.80;
    //Output the transformed data
    cout<<"\n++++++++++++++++++\n";
    cout<<"Shipping Charges";
    cout<<"\n++++++++++++++++++\n";
    cout<<"Total shipping charges: $"<<milesCharge<<"\n";
    }

    //Exit stage right!
    return 0;
}

