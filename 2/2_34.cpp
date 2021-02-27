#include <iostream>

int main()
{
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    std::cout << "i: " << i << std::endl
    << "r: " << r << std::endl
    << "ci: " << ci << std::endl
    << "cr: " << cr << std::endl;
    a = 42;
    b = 42;
    c = 42;
    std::cout << "i: " << i << std::endl
    << "r: " << r << std::endl
    << "ci: " << ci << std::endl
    << "cr: " << cr << std::endl;
}