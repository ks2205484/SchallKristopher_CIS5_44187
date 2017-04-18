/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 13, 2017, 2:10 PM
  Purpose: Minesweeper Roulette V2
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
//Declare Variables
int bombs, xnumber, ynumber;
const int xaxis=10, yaxis=10;

bool lose;
    
class Grid {
public:
    bool has_bomb, marked;
    
    Grid(void){
        has_bomb=false;
        marked=false;
    }
};
void drawBoad(Grid board[xaxis][yaxis])
{
    cout<<" _";
    for (int i=0; i<xaxis; i++)
    {
        cout<<i<<"_";
    }
    cout<<endl;
    for(int y=0; y<yaxis; y++)
    {
        cout<<y<<"|";
        for (int x=0; x<xaxis; x++)
        {
            if(board[x][y].has_bomb && board [x][y].marked)
            {
                cout<<"!|";
            }
            if(board[x][y].has_bomb)
            {
                cout<<"b|";
            }
            else if(board[x][y].marked)
            {
                cout<<"x|";
            }
            else
            {
                cout<<"_|";
            }
        }
        cout<<endl;
    }
}
int main()
{
    lose=false;
    bombs=10;
    xnumber=0;
    ynumber=0;
    Grid gameboard [xaxis][yaxis];
    cout<<"Minesweeper"<<endl;
    for(int i=0; i<bombs; i++)
    {
        int xpos=rand()%10;
        int ypos=rand()%10;
        if(gameboard[xpos][ypos].has_bomb==false)
        {gameboard[xpos][ypos].has_bomb=true;}
        else 
        {
            i--;
        }     
    }
    //Output
    drawBoad(gameboard);
    cout<<endl;
    while(lose != true)
    {
        cout<<"Input a number (0-9) for the X grid: ";
        cin>>xnumber;
        cout<<endl<<"Input a number (0-9) for the Y grid: ";
        cin>>ynumber;
        if(gameboard[xnumber][ynumber].has_bomb== true)
        {cout<<"Boom!"<<endl;
        lose=true;
    }
        else
        {
            cout<<"Try Again"<<endl;
        }
        gameboard[xnumber][ynumber].marked=true;
        cout<<endl;
        drawBoad(gameboard);
        cout<<endl;
    }
    return 0; 
}
