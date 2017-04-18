/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 14, 2017, 3:15 PM
  Purpose: Minesweeper Roulette, Will you test your luck and can you survive the mine field?
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//Declare Variables
int bombs, xnumber, ynumber;

//Global Constants
const int xaxis=10, yaxis=10;

//set behavior of integers
bool lose;

//Create Game Grid
class Grid {
public:
    bool has_bomb, marked;
    
    Grid(void){
        has_bomb=false;
        marked=false;
    }
};
void drawBoard(Grid board[xaxis][yaxis])
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
            else if(board[x][y].has_bomb)
            {
                cout<<"_|";
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
    //Declare Variables and Intro to Game
    lose=false;
    bombs=10;
    xnumber=0;
    ynumber=0;
    Grid gameboard [xaxis][yaxis];
    cout<<"WELCOME TO MINESWEEPER ROULETTE\n";
    cout<<"There are 10 bombs on the minefield!\n";
    cout<<"Can you survive by choosing the correct squares?\n";
    for(int i=0; i<bombs; i++)
    {
        //Randomize Position of Bombs on Grid
        int xpos=rand()%10;
        int ypos=rand()%10;
        if(gameboard[xpos][ypos].has_bomb==false)
        {gameboard[xpos][ypos].has_bomb=true;}
        else 
        {
            i--;
        }     
    }
    drawBoard(gameboard);
    cout<<endl;
    while(lose != true)
    {
        //Input X and Y position and Output
        cout<<"Input a number (0-9) to check the X (horizontal) grid: ";
        cin>>xnumber;
        cout<<endl<<"Input a number (0-9) to check the Y (vertical) grid: ";
        cin>>ynumber;
        if(gameboard[xnumber][ynumber].has_bomb== true)
        {cout<<"Boom! The Land mine Exploded!\n";
        cout<<"Better Luck Next Time!";
        lose=true;
    }
        else
        {
            cout<<"You Survived so far! Test your luck again!"<<endl;
        }
        gameboard[xnumber][ynumber].marked=true;
        cout<<endl;
        drawBoard(gameboard);
        cout<<endl;
    }
    //End of Game
    return 0; 
}
