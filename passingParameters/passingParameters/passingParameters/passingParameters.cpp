#include <iostream>
#include <vector>

using namespace std;

void f1(void* d, int s)
{
    if (s == sizeof(double))
    {
        cout << "double size" << endl;
        double* p;
        p = (double*)d;
        ++(*p); //LINE 8
    }
    else if (s == sizeof(int))
    {
        cout << "int size" << endl;
        int* p;
        p = (int*)d;
        ++(*p); //LINE 15
    }
}

int main()

{
    double v1[] { 25, 75, 100 };
    int v2[] { 72, 76, 98 };
    double* p1 = v1;
    int* p2 = v2;
    cout << sizeof(double) << endl;
    cout << sizeof(void*) << endl;
    f1(&v1, sizeof(p1));
    f1(&v2, sizeof(p2));
    cout << v1 << " " << v2 << endl; //LINE 24 
    return 0;

}