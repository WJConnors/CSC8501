#include <iostream>
#include "board.h"

using namespace std;

int main()
{
    Board board = Board(10);
    if (board.game_loop())
    {
        cout << "You won!" << endl;
    }
    else {
        cout << "You lost..." << endl;
    }
}