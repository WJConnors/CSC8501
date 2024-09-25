#include <iostream>

using namespace std;

bool gzero(int i)
{
    return i >= 0;
}

void negin()
{
    cout << "Enter negative" << endl;
    int i;
    do {
        cin >> i;
    } while (gzero(i));
}

double factorial(int i)
{
    return i == 0 ? 1 : i * factorial(i - 1);
}

int main()
{
    cout << gzero(1) << endl;
    cout << gzero(0) << endl;
    cout << gzero(-1) << endl;

    negin();

    cout << factorial(5) << endl;
    
    return 0;
}
