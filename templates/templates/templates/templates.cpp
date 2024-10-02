#include <iostream>
#include "MatrixInt.h"
#include "Matrix.h"

using namespace std;

int main()
{
	MatrixInt m(3, 4);
	m.set_element(2, 2, 8);
	cout << "element at 2,2 is " << m.get_element(2, 2) << endl;

	Matrix<int> m_int;
	m_int.set_element(1, 1, 4);
	cout << "element at 1,1 is " << m_int.get_element(1, 1) << endl;

	Matrix<double> m_doub;
	m_doub.set_element(2, 2, 8.421);
	cout << "element at 2,2 is " << m_doub.get_element(2, 2) << endl;

	return 0;
}