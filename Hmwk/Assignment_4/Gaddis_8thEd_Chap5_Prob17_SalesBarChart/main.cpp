/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 2:00 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int Store1, Store2, Store3, Store4, Store5;
    

//Input values
    cout<<"To generate today's Sales Bar Chart, enter the\n";
    cout<<"sales for each store rounded to the nearest $100.\n\n";
    do
    {
    cout<<"Enter today’s sales for store 1: ";
    cin>>Store1;
    if (Store1 < 0)
    cout<<"Error! Sales figures must be greater than $0.00.\n";
    }
    while(Store1<0);
    do
    {
    cout<<"Enter today’s sales for store 2: ";
    cin>>Store2;
    if(Store2<0)
    cout<<"Error! Sales figures must be greater than $0.00.\n";
    }
    while (Store2<0);
    do
    {
    cout<<"Enter today’s sales for store 3: ";
    cin>>Store3;
    if (Store3<0)
    cout<<"Error! Sales figures must be greater than $0.00.\n";
    }
    while (Store3<0);
    do
    {
    cout<<"Enter today's sales for store 4: ";
    cin>>Store4;
    if (Store4<0)
    cout<<"Error! Sales figures must be greater than $0.00.\n";
    }
    while (Store4<0);
    do
    {
    cout<<"Enter today's sales for store 5: ";
    cin>>Store5;
    if (Store5<0)
    cout<<"Error! Sales figures must be greater than $0.00.\n";
    }
    while (Store5<0);
    

    //Process by mapping inputs to outputs
    Store1 /= 100;
    Store2 /= 100;
    Store3 /= 100;
    Store4 /= 100;
    Store5 /= 100;
    //Output values
    cout<<"\n    DAILY SALES\n  (each * = $100)\n";
    cout<<"Store 1: ";
    for (int i=0; i<Store1; ++i)
    {
    cout<<"* ";
    }
    cout <<"\nStore 2: ";
    for (int i=0; i<Store2; ++i)
    {
    cout<<"* ";
    }
    cout<<"\nStore 3: ";
    for (int i=0; i<Store3; ++i)
    {
    cout<<"* ";
    }
    cout<<"\nStore 4: ";
    for (int i=0; i<Store4; ++i)
    {
    cout<<"* ";
    }
    cout<<"\nStore 5: ";
    for (int i=0; i<Store5; ++i)
    {
    cout<<"* ";
    }
    cout<<endl;
    //Exit stage right!
    return 0;
}