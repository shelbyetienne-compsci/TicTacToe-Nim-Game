/**
 * Define a base class and then a specific computer game class
 */

#include <iostream>
#include "Nim.h"
#include "TicTacToe.h"
using namespace std;
using namespace se_T3;
int main()
{
    cout << "Choose a game to play: (T)Tic Tac Toe or (N)NIM: \n";
    string s;
    cin >> s;

    if(s=="N")
    {
        Game *g = new Nim(100);
        Game::who w = g->play();
        if (w == Game::HUMAN)
            cout << "Sorry! The computer wins the game!\n";
        else if (w == Game::COMPUTER)
            cout << "Computer Loses!\n";
    }
    else if(s=="T") {
        Game *we = new TicTacToe();
        Game::who r = we->play();
        if (r == Game::HUMAN)
            cout << "You WIN!\n";
        else if (r == Game::COMPUTER)
            cout << "Computer Wins!\n";
        else if (r == Game::NEUTRAL)
            cout << "It's A TIE!\n";
    }
    return 0;
}
