/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 1:30 PM
  Purpose: This Program will figure out if the number entered is Prime or not Prime.
 */

//System Libraries
#include <iostream>
using namespace std;
bool isPrime(int);

int main()
{
int Num;
cout<<"This program will let you know if the number entered is a ";
cout<<"prime or not prime number.\n";
cout<<"Enter a number: ";
cin>> Num;
cout<< "The number "<< Num;
    if (isPrime(Num))
{
        cout << " is a Prime number." << endl;
}
    else
        cout << " is not a Prime number." << endl;
return 0;
}
bool isPrime(int Num)
{
    if (Num > 1)
{
    for (int i = 2; i <= Num; ++i)
{
    if (Num % i == 0)
{
    if(Num == i)
return true;
    else
return false;
}
}
}
return false;
}