#include <iostream>

int main()
{
    std::cout << "输入两个乘数" << std::endl;
    int c1 = 0, c2 = 0;
    std::cin >> c1 >> c2;
    std::cout << c1 << "和" << c2 << "的乘积为" << c1 * c2 << std::endl;
    return 0;
}