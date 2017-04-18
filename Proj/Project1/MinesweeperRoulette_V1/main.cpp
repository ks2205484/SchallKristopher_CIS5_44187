/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 11, 2017, 9:35 AM
  Purpose: Minesweeper Roulette V1
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int bombs, xnumber, ynumber;
const int xaxis=20, yaxis=20;

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
        cout<<i<<" _";
    }
    cout<<endl;
    for(int y=0; y<yaxis; y++)
    {
        cout<<y<<" |";
        for (int x=0; x<xaxis; x++)
        {
            if(board[x][y].has_bomb && board [x][y].marked)
            {
                cout<<" !|";
            }
            if(board[x][y].has_bomb)
            {
                cout<<" b|";
            }
            else if(board[x][y].marked)
            {
                cout<<" x|";
            }
            else
            {
                cout<<" _|";
            }
        }
        cout<<endl;
    }
}
int main()
{
    lose=false;
    bombs=15;
    xnumber=0;
    ynumber=0;
    Grid gameboard [xaxis][yaxis];
    for(int i=0; i<bombs; i++)
    {
        int xpos=rand()%20;
        int ypos=rand()%20;
        if(gameboard[xpos][ypos].has_bomb==false)
        {gameboard[xpos][ypos].has_bomb=true;}
        else 
        {
            i--;
        }     
    }
    drawBoad(gameboard);
    cout<<endl;
    while(lose != true)
    {
        cout<<"Input a # for the X grid: ";
        cin>>xnumber;
        cout<<endl<<"Input a # for the Y grid: ";
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
