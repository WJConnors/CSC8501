#include <iostream>

using namespace std;

int main()
{
    int a;
    int* b;
    a = 100;
    b = new int;
    cout << "pointer b points to address " << b << " on heap\n";
    cout << "The value in location b is " << *b << endl;
    *b = a;
    cout << "The value of stack variable a is " << a << endl;
    cout << "The heap memory at address b cotains " << *b << endl;

    delete b;
    b = NULL;

    return 0;
}

