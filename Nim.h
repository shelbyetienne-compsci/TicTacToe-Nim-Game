/**
 * Nim.h
 * The traditional Nim game: It has a pile of marbles and two players take turns to take away marbles from the pile:
 * each time a player needs to take away at least 1 marble and at most half of the marbles (1 if there is only one marble)
 * The one who takes away the last marble will be losing the game.
 *
 * If you take away marbles such that the left over is 1 less than a power of 2, you will certainly win the game
 */

#ifndef COMPUTERGAME_NIM_H
#define COMPUTERGAME_NIM_H
#include "Game.h"

class Nim : public Game
{
public:
    Nim(int m=0){marbles=m;}
    virtual void displayMessage()const
    {
        Game::displayMessage();
        std::cout << "Nim!\n"
        <<"There are " << marbles << " marbles in the pile. \n"
        <<"You need to take at least one marble away\n"
        <<"and at most half of them or 1 if there is only\n"
        <<"When it is your turn. The one who takes the last\n"
        <<"marble away loses the game.\n\n";
    }
    virtual void computerMove();
    virtual void makeMove();
    virtual bool isGameOver()const{return marbles==0;}
    virtual ~Nim(){}
private:
    int marbles;
};


#endif //COMPUTERGAME_NIM_H
