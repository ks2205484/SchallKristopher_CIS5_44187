/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 5:20 PM
 * Purpose:Calculate a theater's gross and net box office profit.
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <string> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string movieName;
    double adultTix, childTix, grossBox, netBox, distCut;
    double adultPrice=10.00,childPrice=6.00;
    //Initialize variables
    
    //Input data
    cout<<"Enter the name of the movie: ";
    getline(cin, movieName);
    cout<<"Enter number of adult tickets sold: ";
    cin>>adultTix;
    cout<<"Enter number of child tickets sold: ";
    cin>>childTix;
    //Map inputs to outputs or process the data
    grossBox=(adultTix*adultPrice)+(childTix*childPrice);
    netBox=grossBox*0.20;  //keeps 20% of the box office profit
    distCut=grossBox-netBox;
    //Output the transformed data
    cout<<left<<setw(30)<<"Movie Name: "<<right<<setw(20)<<'"'<<movieName <<'"'<<endl;
    cout<<left<<setw(30)<<"Adult Tickets Sold: "<<right<<setw(20)<<" "<<setw(5)<<adultTix<<endl;
    cout<<left<<setw(30)<<"Child Tickets Sold: "<<right<<setw(20)<<" "<<setw(5)<<childTix<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<left<<setw(30)<<"Gross Box Office Profit: "<<right<<setw(20)<<"$ "<<setw(8)<<grossBox<<endl;
    cout<<left<<setw(30)<<"Net Box Office Profit: "<<right<<setw(20)<<"$ "<<setw(8)<<netBox << endl;
    cout<<left<<setw(30)<<"Amount Paid to Distributor: "<<right<<setw(20)<<"$ "<<setw(8)<<distCut<<endl;
    //Exit stage right!
    return 0;
}

