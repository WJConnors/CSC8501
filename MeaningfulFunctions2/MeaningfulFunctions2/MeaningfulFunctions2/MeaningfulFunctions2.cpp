#include <iostream>
#include "Calculations.h"

using namespace std;

int main()
{
    std::cout << "Enter your numbers and symbol" << std::endl;
    int i, j;
    char c;
    std::cin >> i;
    std::cin >> j;
    std::cin >> c;

    switch (c)
    {
    case '+':
        std::cout << add(i, j) << std::endl;
        break;
    case '-':
        std::cout << subtract(i, j) << std::endl;
        break;
    case '*':
        std::cout << product(i, j) << std::endl;
        break;
    case '/':
        std::cout << quotient(i, j) << std::endl;
        break;

    }

    return 0;
}