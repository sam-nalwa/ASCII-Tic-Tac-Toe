#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};
int plays();
int checkwin();
void board();

void board() //drawing the board
{
	system("cls");
	cout << "\n\nSimple Tic Tac Toe Game\n\n";

	cout << "Player 1 (#)  -  Player 2 (@)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << grid[1] << "  |  " << grid[2] << "  |  " << grid[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << grid[4] << "  |  " << grid[5] << "  |  " << grid[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << grid[7] << "  |  " << grid[8] << "  |  " << grid[9] << endl;

	cout << "     |     |     " << endl << endl;
}



int main()
{
    printf("Hello, world!\n");
    board();
    return 0;
}


