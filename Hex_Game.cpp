// Hex_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Intial Project: Draw a HEX board and determine a legal position and a winning position
// 
// Pharia Le
// 17 July 2022

#include <iostream>
#include "Board.h"
using namespace std;

int main()
{
    short size = 0;

    cout << "Hello Player!\n";
    cout << "Welcome to the Game of Hex!" << endl;
    cout << "What size board say you?!" << endl;
    cin >> size;
    cout << "Beginning game of size " << size << endl;
    Board hexBoard = Board(size);
    hexBoard.print_board();
}