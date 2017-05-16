/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on May 3, 2017, 5:15 PM
  Purpose: This Program will generate a Profit or Loss on Stock purchases.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
double stockProfitLoss(int, double, double, double, double);

int main()
{
int   NumOfShares;
double ProLoss,PurchP,PurchC,SaleP,SaleC;

cout<<"\nThis Program will Caculate the profit (or loss) from the sale of stock.\n";
cout<<"What is the number of shares? ";
cin>>NumOfShares;
cout<<"What is the purchase price per share? $";
cin>>PurchP;
cout<<"What is the purchase commission paid? $";
cin>>PurchC;
cout<<"What is the sale price per share? $";
cin>>SaleP;
cout<<"What is the sale commission paid? $";
cin>>SaleC;

ProLoss = stockProfitLoss(NumOfShares, PurchP, PurchC, SaleP,SaleC);
cout<<"The profit (or loss) from the sale of stock is $";
cout<<fixed<<showpoint<<setprecision(2);
cout<<ProLoss<<endl<<endl;

return 0;
}
double stockProfitLoss(int NumOfShares, double PurchP, double PurchC,
	               double SaleP, double SaleC)
{
return ((NumOfShares * SaleP) - SaleC) - ((NumOfShares * PurchP)+ PurchC);
}