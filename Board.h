#ifndef BOARD_H_
#define BOARD_H_

#include <iostream>
using namespace std;

class Board
{
public:
    short size_;
    short** position_matrix;

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
		cout << "    ";
		char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K' };
		for (short alpha = 0; alpha < size_; alpha++)
		{
			cout << alphabet[alpha] << "   ";
		}
		cout << endl;
		for (short x = 0; x < size_; x++)
		{

			short indent = 0;
			while (indent < 1+(2 * x))
			{
				cout << " ";
				indent++;
			}
			printf("%2d  ", x+1);

			for (short y = 0; y < size_; y++)
			{
				if (y != 0) cout << " - ";
				if (position_matrix[x][y] == 0) {
					cout << ".";
				}
			}
			cout << endl;

			indent = 0;
			while (indent < (7 + (2 * x) - 1))
			{
				cout << " ";
				indent++;
			}
			if (x + 1 != size_) {
				cout << "\\";
				short filler = 0;
				while (filler < size_ - 1)
				{
					cout << " / \\";
					filler++;

				}
				cout << endl;
			}

		}
    }

    

};

#endif // BOARD_H_
