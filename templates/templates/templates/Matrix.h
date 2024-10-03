#pragma once
#include <ostream>

using namespace std;

template <typename T>
class Matrix
{
public:
    Matrix(int x = default_x, int y = default_y);
    Matrix(const Matrix<T>& src);
    ~Matrix();
    Matrix<T>& operator=(const Matrix<T>& rhs);
    template <typename E>
    friend ostream& operator<<(ostream& ostr, const Matrix<E>& mtx);
    template <typename E>
    friend Matrix<E> operator*(const Matrix<E>& a, const Matrix<E>& b);

    int get_x_size() const { return x_size; }
    int get_y_size() const { return y_size; }
    T get_element(int x, int y) const;
    void set_element(int x, int y, T elem);

    static const int default_x = 3;
    static const int default_y = 3;
protected:
    T** cells;
    int x_size;
    int y_size;
};

#include "MatrixDefinitions.h"