#include <iostream>
#include "board.h"

using namespace std;

int main()
{
    Board board = Board(10);
    board.game_loop() ?
        cout << "You won!" << endl :
        cout << "You lost..." << endl;
}