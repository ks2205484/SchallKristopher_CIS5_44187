/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on February 28, 2017, 1:30 PM
 * Purpose:  Total Purchase
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double itmOne=15.95, itmTwo=24.95, itmThr=6.95, itmFor=12.95, itmFiv=3.95; // Price of each item
    double subTot=itmOne+itmTwo+itmThr+itmFor+itmFiv; // Subtotal of all items
    double slsTax=.07*subTot; // Amount of Sales Tax
    double totSale=slsTax+subTot; // Sales Total
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Price of item one is $ "<<itmOne<<endl;
    cout<<"Price of item two is $ "<<itmTwo<<endl;
    cout<<"Price of item three is $ "<<itmThr<<endl;
    cout<<"Price of item four is $ "<<itmFor<<endl;
    cout<<"Price of item five is $ "<<itmFiv<<endl;
    cout<<"Subtotal of all items is $ "<<subTot<<endl;
    cout<<"Total sales tax is $ "<<slsTax<<endl;
    cout<<"Sales total is $ "<<totSale<<endl;
    //Exit stage right!
    return 0;
}

