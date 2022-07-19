#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
using namespace std;

class Board
{
public:
	short size_;
    short**position_matrix;

    Board(short size) {
        size_ = size;
        generate_board();
    }

    void generate_board()
    {
        position_matrix = new short* [size_];
        for (short i = 0; i < size_; ++i)
        {
            position_matrix[i] = new short[size_];
        }

        for (short j = 0; j < size_; ++j)
        {
            for (int k = 0; k < size_; ++k)
            {
                position_matrix[j][k] = 0;
            }
        }
    }

    void print_board()
    {
        cout << "Current Hex Board" << endl;
		for (short i = 0; i < size_; i++) {
			short indent = 0;
			while (indent < i)
			{
				cout << " ";
				indent++;
			}

			short j = 0;
			while  (j < size_) {
				cout << " _ ";
				j++;
			}
			cout << endl;

			indent = 0;
			while (indent < i)
			{
				cout << " ";
				indent++;
			}
			short k = 0;
			while (k < size_) {
				cout << "/ \\";
					k++;
			}
			cout << endl;

			indent = 0;
			while (indent < i)
			{
				cout << " ";
				indent++;
			}
			for (short m = 0; m < size_; m++)
			{
				cout << "|" << position_matrix[i][m] << "|";
			}
			cout << endl;

			indent = 0;
			while ( indent < i)
			{
				cout << " ";
				indent++;
			}
			short n = 0;
			while ( n < size_) {
				cout << "\\_/";
				n++;
			}
			cout << endl;


		}

    }

};

#endif // BOARD_H_
