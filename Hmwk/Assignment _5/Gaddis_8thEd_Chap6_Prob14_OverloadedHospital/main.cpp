/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 9:15 PM
  Purpose: This Program will calculate hospital charges.
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
double calcData(int, double, double, double);
double calcData(double, double);

int main()
{
char InOut;
int NumOfDays;
double DailyRate,ServChges,MedChges,TotChges;
cout<<"This program calculates a patient’s hospital charges\n";
cout<<"---------------------------------------------------------------\n";
cout<<"Was patient admitted as an in-patient or an out-patient?\n";
cout<<"Enter (I) for in-patient\nEnter (O) for out-patient\n";
cin  >> InOut; 
    switch(InOut)
{
    case 'i' :
    case 'I' :  
        do
{
	cout<<"How many days did the patient spend in the hospital? ";
	cin>>NumOfDays;
            if (NumOfDays < 0)
{
            cout<<"Number of days must be greater than 0.\n";
}
} 
    while(NumOfDays < 0);
        do
{
	cout<<"What was the daily rate? $";
	cin>>DailyRate;
            if (DailyRate < 0)
{
            cout<<"Daily rate must be greater than 0.\n";
}
}
    while(DailyRate < 0);
	case 'o' :
        case 'O' : 
            do
{
                cout<<"Enter the charges for hospital services";
                cout<<"(lab tests, etc.): $";
                cin>>ServChges;
            if (ServChges < 0)
{
                cout <<"Charges for hospital services must be greater than 0.\n";
}
}
        while (ServChges < 0);
            do
{
                cout<<"Enter the hospital medication charges: $";
                cin>>MedChges;
            if (MedChges < 0)
{
		cout<<"Hospital medication charges must be greater than 0.\n";
}
}
        while(MedChges < 0);
}
        cout<<"\n        Patient hospital stay report\n";
        cout<<"----------------------------------------------------\n";
	cout<<right<<fixed<<showpoint<<setprecision(2);
switch(InOut)
{
    case 'i' :
    case 'I' : TotChges = calcData(NumOfDays, DailyRate, ServChges, MedChges);
	cout<<"Number of days spent in the hospital : " ;
        cout<<setw(11)<<NumOfDays<<endl;
        cout<< "Daily rate                           : $";
	cout<<setw(10)<<DailyRate<<endl;
break;
    case 'o' :
    case 'O' : TotChges = calcData(ServChges, MedChges);
}
    cout<<"Charges for hospital services        : $" ;
    cout<<setw(10)<<ServChges<<endl;
    cout<<"Hospital medication charges          : $" ;
    cout<<setw(10)<<MedChges<<endl;
    cout<<"Total charges                        : $" ;
    cout<<setw(10)<<TotChges<<endl;
	
}
double calcData(int NumOfDays, double DailyRate, double ServChges,
				double MedChges)
{
return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}
double calcData(double ServChges, double MedChges)
{
return ServChges + MedChges;
}