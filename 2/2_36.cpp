#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    std::cout << "a: " << a << std::endl << "c: " << c << std::endl;
}