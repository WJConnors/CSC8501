
#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    cout << "Value is " << a << '\n';
    cout << "Address is " << &a << '\n';

    int *b = &a;
    cout << "Value in location pointed to by b is " << *b << '\n';

    cout << "value in b is " << b << '\n';
    cout << b << " should be the same as " << &a << '\n';
    cout << "b is actually at " << &b << '\n';

    int** c;
    c = &b;
    cout << "c is pointing to what b points to: " << **c << '\n';
    cout << "c points to: " << *c << endl;
    cout << "c actually holds the value " << c << endl;
    cout << c << " is the same value as b's memory location: " << &b << endl;
    cout << "c is actually at memory location " << &c << endl;

    cout << "c is retieving what is at address " << **&c << endl;
    cout << "the value of a is in memory location " << &a << endl;

    return 0;
}

