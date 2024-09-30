#include <iostream>

using namespace std;

void some_function()
{
	int a = 400;
	char letter = 'b';
}

int global_variable = 50;

int main()
{
	cout << "global variable contains the value " << global_variable << endl;

	int a = 100;
	int* b;

	{
		int a = 200;
		cout << "the value in a is " << a << endl;
		int* local_ptr = new int(300);
		b = local_ptr;
	}

	cout << "the value in a is " << a << endl;
	cout << "the value pointed to by 'b' is " << *b << endl;
	delete b;
	b = nullptr;

	int y = 2;
	int arr[2] = {0,1};
	for (int x = 0; x < y; ++x)
	{
		cout << arr[x] << ", ";
	}
}