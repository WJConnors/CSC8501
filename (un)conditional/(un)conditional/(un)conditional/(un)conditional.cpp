#include <iostream>

using namespace std;

void calculate(int* k, int i, bool b)
{
    b ? *k += i : *k -= i;
}

int main()
{
    int j, k = 0;
    for (int i = 1; i <= 10; i++)
    {
        cin >> j;
        if (j < 5)
            calculate(&k, i, true);
        if (j > 5)
            calculate(&k, i, false);
        cout << k << endl;
    }
}