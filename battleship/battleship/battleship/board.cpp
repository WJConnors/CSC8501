#include <iostream>
#include "board.h"

using namespace std;

Board::Board(int turn_amount) : ships { Ship(3), Ship(2) }, turns(turn_amount)
{
	for (int i = 0; i < 5; i++)
	{
		std::fill(board[i], board[i] + 5, nullptr);
		std::fill(display[i], display[i] + 5, 'U');
	}

	board[0][1] = board[1][1] = board[2][1] = &ships[0];
	board[3][3] = board[3][4] = &ships[1];
}

bool Board::game_loop()
{
	for (int i = turns; i > 0; i--)
	{
		cout << "you have " << i << " more turn(s)" << endl;

		display_board();

		int x, y;
		cout << "enter x then y" << endl;
		cin >> x;
		cin >> y;
		x--;
		y--;

		if (board[x][y])
		{
			board[x][y]->hit();
			display[x][y] = 'H';
		}
		else
		{
			display[x][y] = 'M';
		}

		bool won = true;
		for (Ship ship : ships)
		{
			if (ship.get_hp()) won = false;
		}
		if (won) return true;
	}
	return false;
}

void Board::display_board() const
{
	cout << "  ";
	for (int i = 1; i < 6; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << " ";
		for (int j = 0; j < 5; j++)
		{
			cout << display[i][j] << " ";
		}
		cout << endl;
	}
}