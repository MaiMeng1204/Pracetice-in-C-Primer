#include <iostream>

int main()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    std::cout << i << std::endl;
}