#include <iostream>

using namespace std;

void print_array(const string& name)
{
    for (char c : name)
    {
        cout << c;
    }
    cout << endl;
}

void battleship()
{
    bool board[5][5] = { false };
    board[1][1] = true;
    board[2][3] = true;
    board[4][3] = true;

    for (int i = 4; i >= 0; i--)
    {
        cout << "guess x then y coordinates" << endl;
        int x, y;
        cin >> x;
        cin >> y;

        if (board[x][y])
        {
            cout << "correct guess" << endl;
            board[x][y] = false;
        }
        else
        {
            cout << "incorrect guess" << endl;
        }
        cout << "You have " << i << " guess(es) remaining" << endl;
    }

    if (!board[1][1] && !board[2][3] && !board[4][3])
    {
        cout << "winner" << endl;
    }
    else
    {
        cout << "loser" << endl;
    }
}

int main()
{
    char name[] = "Billy Connors";
    //print_array(name);

    char* first = new char[6];
    char* last = new char[9];

    for (int i = 0; i < 5; i++)
    {
        first[i] = name[i];
    }
    first[5] = '\0';
    for (int i = 6; i < 14; i++)
    {
        last[i - 6] = name[i];
    }
    cout << first << endl;
    cout << last << endl;

    battleship();
}

