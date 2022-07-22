// Hex_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Intial Project: Draw a HEX board and determine a legal position and a winning position
// 
// Pharia Le
// 17 July 2022

#include <string>
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
    int positionX;
    while (true)
    {
        cout << "Lets pick a position...";
        cout << "Pick a Number\n";
        if (cin >> positionX && positionX <= size) {
            break;
        }
        else {
            cout << "Enter a valid integer value!\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    char positionY;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string alphabetRange = alphabet.substr(0, size);
    while (true)
    {
        cout << "Pick a Alphabet Char\n";
        if (cin >> positionY && isalpha(positionY) && alphabetRange.find(toupper(positionY)) != string::npos) {
            break;
        }
        else {
            cout << "Enter a valid char!\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    cout << "You picked a valid position: (" << positionX << ", " << positionY << ")" << endl;
    cout << "Thanks!" << endl;
}