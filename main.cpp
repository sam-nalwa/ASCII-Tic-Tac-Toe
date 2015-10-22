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

int winstate() //creating all possible win states
{
    /****
    return 1 for all possible wins
    return 0 when the game is a draw
    return -1 when game is still in progress
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
	else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3'
                    && grid[4] != '4' && grid[5] != '5' && grid[6] != '6'
                  && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
		return 0;
	else
		return -1;
}


int main()
{
	int player = 1;
	int win;
	int response;

	char playerChar;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", please enter a position number and press enter:  ";
		cin >> response;

		playerChar=(player == 1) ? '#' : '@';

		if (response == 1 && grid[1] == '1')
			grid[1] = playerChar;

		else if (response == 2 && grid[2] == '2')
			grid[2] = playerChar;

		else if (response == 3 && grid[3] == '3')
			grid[3] = playerChar;

		else if (response == 4 && grid[4] == '4')
			grid[4] = playerChar;

		else if (response == 5 && grid[5] == '5')
			grid[5] = playerChar;

		else if (response == 6 && grid[6] == '6')
			grid[6] = playerChar;

		else if (response == 7 && grid[7] == '7')
			grid[7] = playerChar;

		else if (response == 8 && grid[8] == '8')
			grid[8] = playerChar;

		else if (response == 9 && grid[9] == '9')
			grid[9] = playerChar;

		else
		{
			cout<<"That move is invalid. Please press enter.";
			player--;
			cin.ignore();
			cin.get();
		}

		win=winstate();
		player++;
	}while(win==-1);
	board();
	if(win==1)

		cout<<"\tPlayer "<<--player<<" has won. ";
	else
		cout<<"\t This game is a draw";

	cin.ignore();
	cin.get();
	return 0;
}



