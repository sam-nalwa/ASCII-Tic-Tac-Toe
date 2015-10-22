#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};
int plays();
int winstate();
void board();

void board() //drawing the board
{
	system("cls");
	cout << "\n\nASCII Tic Tac Toe Game\n\n";

	cout << "Player 1 (#)  vs  Player 2 (@)" << endl << endl;
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


int winstate() //function to check the wins //return 1=game over with result //return -1 = game in progress //0 game is over no resule
{
    /****
    return 1 for all possible wins
    *****/

	if (grid[1] == grid[2] && grid[2] == grid[3])
		return 1;
	else if (grid[4] == grid[5] && grid[5] == grid[6])
		return 1;
	else if (grid[7] == grid[8] && grid[8] == grid[9])
		return 1;
	else if (grid[1] == grid[4] && grid[4] == grid[7])
		return 1;
	else if (grid[2] == grid[5] && grid[5] == grid[8])
		return 1;
	else if (grid[3] == grid[6] && grid[6] == grid[9])
		return 1;
	else if (grid[1] == grid[5] && grid[5] == grid[9])
		return 1;
	else if (grid[3] == grid[5] && grid[5] == grid[7])
		return 1;

    /****
    return 0 when the game is a draw
    *****/
	else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3'
                    && grid[4] != '4' && grid[5] != '5' && grid[6] != '6'
                  && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
		return 0;

    /****
    return -1 when game is still in progress
    *****/

	else
		return -1;
}


int main()
{
    printf("Hello, world!\n");
    board();
    return 0;
}


