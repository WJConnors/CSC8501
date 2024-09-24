#include <iostream>
#include "Calculations.h"

using namespace std;

int main()
{
    cout << "Enter your numbers and symbol" << endl;
    int i, j;
    char c;
    cin >> i;
    cin >> j;
    cin >> c;

    switch (c)
    {
    case '+':
        cout << add(i, j) << endl;
        break;
    case '-':
        cout << subtract(i, j) << endl;
        break;
    case '*':
        cout << product(i, j) << endl;
        break;
    case '/':
        cout << quotient(i, j) << endl;
        break;

    }

    return 0;
}


