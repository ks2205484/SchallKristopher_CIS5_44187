/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 13, 2017, 6:15 PM
  Purpose: This Program will let you know which number entered is the smallest or largest.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) 
{
int mn,mx;
const int Numb = 10;
int a[Numb];
cout<<"Enter 10 values:"; 
for(int i=0;i<10;i++)
{
cout<< "\nEnter value: ";
cin>> a[i]; 
}
mn=a[0];
mx=a[0];
for(int i=1;i<10;i++)
    {
    if(mn>a[i])
    {
    mn=a[i];
    }
    else if(mx<a[i])
    {
    mx = a[i];
    }
}
    cout<<"The Maximum number is: "<< mx << endl;
    cout<<"The Minimum number is: "<< mn << endl;

return 0;

}