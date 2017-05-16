/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 14, 2017, 4:15 PM
  Purpose: This Program will sort the names into alphabetical order.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Function Prototypes

void selectionSort(string[], int);
void displayArray(string[], int);

int main()
{
const int SIZE = 20;
string name[SIZE] =
{"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

selectionSort(name, SIZE);
displayArray(name, SIZE);
return 0;
}
void selectionSort(string array[], int size)
{
int startScan, minIndex;
string minValue;
for (int startScan = 0; startScan < (size - 1); startScan++)
{
minIndex = startScan;
minValue = array[startScan];
for (int index = startScan + 1; index < size; index++)
{
if(array[index] < minValue)
{
minValue = array[index];
minIndex = index;
}
}
array[minIndex] = array[startScan];
array[startScan] = minValue;
}
}
void displayArray(string name[], int size)
{
for (int i = 0; i < size; i++)
{
cout << name[i] << endl;
}
}