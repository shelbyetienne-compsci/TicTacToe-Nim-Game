//
// Created by Shelby Etienne on 4/20/20.
//

#include "Nim.h"

void Nim::computerMove()
{
    //Randomly determine the number of marbles to reduce
    int n=(marbles==1)?1:(rand()/(double)RAND_MAX*marbles/2+1);
    marbles-=n;
    std::cout<<"The machine has taken " << n << " marbles away, you have \n"
    <<marbles << " marbles left.\n\n";
}

void Nim::makeMove()
{
    int x;
    std::cout << "How many marbles would you like to take away? \n";
    std::cin>> x;
    marbles-=x;
    std::cout<<"You have taken " << x << " marbles away, you have \n"
             <<marbles << " marbles left.\n\n";
}