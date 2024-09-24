
#include <iostream>
using namespace std;

void v1(char* destination, const char* source) { //Takes in character arrays, destination then source

	while (*source != '\0') { //while b isn't the last character

		*destination = *source; //copy current character in b to a
		destination++; //moves pointer to next character
		source++; 
		//cout << a << '\n';
		//cout << &a << '\n';
		cout << source << '\n';
		cout << &source << '\n';
	}
	*destination = '\0'; //set value in a to null
}

void v2(char* a, const char* b) { //Takes in character arrays, destination then source
	while (*b != '\0') { //while b isn't the last character
		*a++ = *b++; //copy current character in b to a and increment pointers
	}
	*a = '\0'; //set last value in a to null
}

int main()
{
	char a[] = "first string";
	char b[13];
	/*
	char x = new char[5]; Should be char* x = new char[5];
	char y = new char[10];

	char* a = x[0]; Should be char* a = &x[0];

	char* b = y[4];
	The source string must be initialised with a null character at the end
	*/

	v1(b, a);
	cout << a << '\n';
	cout << b << '\n';

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