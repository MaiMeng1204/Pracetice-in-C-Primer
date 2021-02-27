#include <iostream>

int main()
{
    int i = 0, j = 1;
    int *p = &i;
    std::cout << p << std::endl;
    p = &j;
    std::cout << p << std::endl;
    *p = 2;
    std::cout << j << std::endl;
}