
#include <iostream>
using namespace std;

void v1(char* a, const char* b) {

	while (*b != '\0') { //while b isn't null

		*a = *b; //value of a is new value of b
		a++; //increments character in a
		b++; //increments character in b
	}
	*a = '\0'; //set value in a to null
}

/*
a b
b b
c c
0 c
*/

int main()
{
	char a = 'a';
	char b = 'b';
	char* pa = &a;
	char* pb = &b;

	v1(pa, pb);
	cout << a << '\n';
	//cout << b << '\n';

	return 0;
}

/*int add(int x, int y)
{
	return x + y;
}

int minus(int x, int y);

int main() {
	int a, b, c, exit;

	cout << "Please type in a number" << "\n";
	cin >> a;

	cout << "Please type in another number" << "\n";
	cin >> b;

	c = add(a, b);

	cout << a <<" + " << b << " = " << c << "\n";

	cout << a << " + " << b << " = " << add(a, b) << "\n";

	cout << "enter another number to exit " << "\n";

	cin >> exit;

	return 0;
}

int minus(int x, int y)
{
	return x - y;
}*/