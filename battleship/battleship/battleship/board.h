#pragma once
#include "ship.h"

class Board
{
public:
	Board(int turn_amount);
	bool game_loop();
private:
	Ship* board[5][5];
	char display[5][5];
	Ship ships[2];
	int turns;

	void display_board() const;
};