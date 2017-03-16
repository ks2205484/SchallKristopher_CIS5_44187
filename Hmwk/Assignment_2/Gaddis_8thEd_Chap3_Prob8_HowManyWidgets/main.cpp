/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 5:30 PM
 * Purpose: How many Widgets are on the Pallet
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
    double widgetWght=12.5; //12.5 pounds each widget
    double palletEmpty, palletWght;
    double widgetNum;
    //Initialize variables
    
    //Input data
    cout<<"How much does the empty pallet weight (In pounds): ";
    cin>>palletEmpty;
    cout<<"How much does the pallet weight (With widgets): ";
    cin>>palletWght;
    //Map inputs to outputs or process the data
    widgetNum=(palletWght-palletEmpty)/12.5;
    //Output the transformed data
    cout<<"There are: "<<widgetNum<<" Widgets on the pallet. \n\n";
    //Exit stage right!
    return 0;
}

