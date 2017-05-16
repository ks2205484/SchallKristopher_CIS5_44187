/* 
 * File:   main.cpp
 * Author: Kristopher Schall
 * Created on May 14, 2017, 8:00 PM
 * Purpose:  Menu for assignment #6
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <string>
#include <ctime>
//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        menu();
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1': prob1();break;
            case '2': prob2();break;
            case '3': prob3();break;
            case '4': prob4();break;
            case '5': prob5();break;
            case '6': prob6();break;
            case '7': prob7();break;
            case '8': prob8();break;
            case '9': prob9();break;
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

void prob9(void){
    cout<<"Problem #9 Chapter 8 will sort benchmarks."<<endl;
    void bubbleSort(int[], int, int&);
void selectionSort(int[], int, int&);
void displayResults(int, int);
int main()
{
const int SIZE = 20;
int List1[SIZE] = {69, 12, 30,  17, 16, 22, 43, 53, 22, 11,
                   10, 79, 28, 67, 86, 15,  4, 63, 42, 32};
int List2[SIZE] = {69, 12, 30,  17, 16, 22, 43, 53, 22, 11,
                   10, 79, 28, 67, 86, 15,  4, 63, 42, 32};
int Exch1 = 0, Exch2 = 0;
bubbleSort(List1, SIZE, Exch1);
selectionSort(List2, SIZE, Exch2);
displayResults(Exch1, Exch2);
}
void displayResults(int Exch1, int Exch2)
{	
    cout<<"Number of exchanges made by each sort algorithm.\n";
    cout<<"Bubble sort:    "<<Exch1<<endl;
    cout<<"Selection sort: "<<Exch2<<endl;
}
void bubbleSort(int array[], int size, int &Exch)
{
    int temp;
    bool swap;
        do
	{ 	
            swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
	if (array[count] > array[count + 1])
	{
	temp = array[count];
        array[count] = array[count + 1];
	array[count + 1] = temp;
	swap = true;
	Exch++;
	}
    }
	} while (swap);
 }
void selectionSort(int array[], int size, int &Exch2)
{
    int startScan, minIndex, minValue;
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
    for (int index = startScan + 1; index < size; index++)
    {
    if (array[index] < minValue)
    {
        minValue = array[index];
        minIndex = index;
        Exch2++;
    }
}
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
    }
}

void prob8(void){
    cout<<"Problem #6 Chapter 8 will sort a selection by alphabetical order."<<endl;
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

void prob7(void){
    cout<<"Problem #3 Chapter 8 Will search if you are a lottery winner."<<endl;
    int searchList(int [], int, int);

int main()
{
const int NUMS = 10;
int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
                    62483, 77777, 79422, 85647, 93121 };
int WinNums,Search;			
    cout<<"Enter this week’s winning five-digit number: ";
    cin>>WinNums;
    Search = searchList(Picks, NUMS, WinNums);
	if (Search == -1)
            cout<<"Sorry, no winning ticket this week.\n";
	else
	{
            cout<<"Congratulations!\nYou have the winning five-digit number: " 
            <<Picks[Search]<<endl;
	}
return 0;
}
int searchList(int array[], int size, int value)
{
int  position = -1,					
first = 0,						
last = size - 1,middle;						
    bool found = false;					
        while (!found && first <= last)
	{
	middle = (first + last) / 2; 	 
            if (array[middle] == value)		
            {
            position = middle;			
            found = true;				
		}
		else if (array[middle] > value)last = middle - 1;
		else 							
		first = middle + 1;
	}
return position;				
}
void prob6(void){
    cout<<"Problem #2 Chapter 8 will let you know if you are a lottery winner."<<endl;
int searchList(int [], int, int);
int main()
{
const int NUMS=10;
int Picks[NUMS]={ 13579, 26791, 26792, 33445, 55555,
                  62483, 77777, 79422, 85647, 93121 };
int WinNums, Search;			
    cout<<"Enter this week’s winning five-digit number: ";
    cin>>WinNums;
    Search = searchList(Picks, NUMS, WinNums);

    if (Search == -1)
	cout<<"Sorry, no winning ticket this week.\n";
    else
    {
	cout<<"Congratulations!\nYou have the winning numbers: " 
	<<Picks[Search]<< endl;
    }

    return 0;
}
int searchList(int list[], int size, int value)
{
    int index = 0;			
    int position = -1;		
    bool found = false;		
        while (index < size && !found)
	{
            if (list[index] == value)	
            {
            position = index;		
            found = true;			
            }
	index++;					
    }
return position;				
}
void prob5(void){
    cout<<"Problem #1 Chapter 8 will let you know if your account # is valid."<<endl;
    int searchList(int[], int, int);

int main()
{
const int ACCTS = 18;
int List[ACCTS] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
int AcctNum, 
    Result;
    cout<<"Enter your charge account number to determine if it is valid: ";
    cin>>AcctNum;
    Result = searchList(List, ACCTS, AcctNum);
        if(Result == -1)
            cout<<"Account number "<<AcctNum<<" is invalid.\n";
	else
            cout<<"Account number "<<List[Result]<< " is valid\n";

	return 0;
}
int searchList(int list[], int size, int value)
{
    int index = 0,position = -1;
        bool found = false;
    while (!found && index < size)
    {
        if (list[index] == value)		
        {
        found = true;				
	position = index;
	}
	index++;
	}
	return position;
}
void prob4(void){
    cout<<"Problem #4 Chapter 7 Will let you know if you know if you have the\n"
            "winning lottery numbers"<<endl;
    int winningDigits[5];
int player[5];
int digit, match = 0;

srand(time(NULL));					
    for (int i = 0; i < 5; i++)
	{
        winningDigits[i] = 0 + rand() % 9;
	} 
	cout<<"Enter your 5 lottery picks in the range of 0 to 9,\n";
        cout<<"one number at a time.\n";
	for (int i = 0; i < 5; i++)
	{
            do
            {
            cout<<"Number "<<(i + 1)<<": ";
            cin>>digit;
            if (digit < 0 || digit > 9)
            {
            cout<<"Invaild number!\n";
            cout<<"Pick a number in the range of 0 to 9.\n";
            }
	}
            while (digit < 0 || digit > 9);
            player[i] = digit;
	}
	for (int i = 0; i < 5; i++)
	{
            if (winningDigits[i] == player[i])match++;
	}
	cout<<"Winning numbers : ";
	for (int i = 0; i < 5; i++)
	{
	cout<<winningDigits[i]<<" ";
	}
	cout<<endl;
	cout<<"player numbers  : ";
	for (int i = 0; i < 5; i++)
	{
	cout<<player[i]<<" ";
	}
	cout << endl;

	cout << "Matching numbers: " << match << endl;

}

void prob3(void){
    cout<<"Problem #6 Chapter 7 Will let you know which jars of hot sauces sold the best."<<endl;
    int jars = 5;
string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int sales[jars];
    cout << "Enter the number of jars sold for each type of salsa.\n";
	for (int i = 0; i < jars; i++)
	{
	int num;
            do
	{
            cout << salsa[i] << ": "; 
            cin  >> num;
            if (num < 0)
            cout << "Error! Jars sold must be greater then 0.\n";
            }
            while (num < 0);
            sales[i] = num; 
	}
	int high, low, tot = 0;
	high = low = sales[0];
        cout<< "\n     Sala Sales Report\n";
	cout<< "---------------------------\n";
	cout<< fixed << showpoint << setprecision(2);
        for (int i = 0; i < jars; i++)
	{
        cout<<salsa[i]<<": "<<sales[i]<<" jars"<<endl;
	tot += sales[i];
        if(sales[i] > high)
	{
	high = sales[i];
	}
	else if (sales[i] < low)
	{
	low = sales[i]; 
	}
}
    cout<<"Total sales: "<<tot<<" jars"<<endl;
    cout<<"Highest selling products: ";
        for (int i = 0; i < jars; i++)
	{
	if (sales[i] == high)
	cout<<salsa[i]<<" ";
	}
        cout<<endl;
	cout<<"Lowest selling products:  ";
        for (int i = 0; i < jars; i++)
	{
        if (sales[i] == low)
	cout<<salsa[i]<< " ";
	}
        cout << endl;
}

void prob2(void){
     cout<<"Problem #5 Chapter 7 will calculate how much food monkeys eat."<<endl;
  const int mkys = 3;
const int days = 7;
int food[mkys][days];
double pounds, least, most, sum = 0;
	
    cout<<"Input how many pounds of food each monkey ate each day.\n";
	for (int row = 0; row < mkys; row++)
	{
            for (int col = 0; col < days; col++)
            {
		do
		{
                cout<<"Monkey #"<<(row + 1)<<" on day #"<<(col + 1);
		cout<<" ate: ";
		cin  >> pounds;

		if (pounds < 0)
		{
		cout<<"Error! Number of pounds must be greater than 0.\n";
                }
                }
                while (pounds < 0);
                food[row][col] = pounds;
                sum += pounds;
		}
		cout<<endl;							
	}
        least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
            for (int col = 0; col < days; col++)
            {
                if (food[row][col] < least)
		{ 
		least = food[row][col];
		}
		if (food[row][col] > most)
		{ 
		most = food[row][col];
		}
	}
}

cout<< "\n              Weekly Food Report\n";
cout<< "----------------------------------------------------\n";
cout<<fixed<<showpoint<<setprecision(1);
cout<<"Average amount of food eaten per day : "<<sum / 21.0<<" lbs.\n";
cout<<"Least amount of food eaten: "<<least<<" lbs.\n";
cout<<"Greatest amount of food eaten: "<<most<<" lbs.\n";
}

void prob1(void){
    cout<<"Problem #1 Chapter 7 will let you know which number is largest and smallest"<<endl;
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
   
}

void menu(void){
    cout<<endl<<endl<<"Type 0 to exit"<<endl;
    cout<<"Type 1 for Sum 1 to n Problem"<<endl;
    cout<<"Type 2 for Sum 0.1 error Problem"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type 7 for Problem 7"<<endl;
    cout<<"Type 8 for Problem 8"<<endl;
    cout<<"Type 9 for Problem 9"<<endl<<endl;
}