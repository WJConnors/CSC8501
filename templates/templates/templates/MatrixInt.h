#pragma once

class MatrixInt
{
public:
    static const int default_x = 3;
    static const int default_y = 3;
    MatrixInt(int x = default_x, int y = default_y);
    ~MatrixInt();
    int get_x_size() const { return x_size; }
    int get_y_size() const { return y_size; }
    int get_element(int x, int y) const;
    void set_element(int x, int y, int elem);
protected:
    int** cells;
    int x_size;
    int y_size;
};