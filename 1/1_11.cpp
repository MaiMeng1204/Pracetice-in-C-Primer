#include <iostream>

int main()
{
    int v1 = 0, v2 = 0, sum = 0;
    std::cout << "请输入两个整数：" << std::endl;
    std::cin >> v1 >> v2;
    int val = v1;
    while (val <= v2)
    {
        sum += val;
        ++val;
    }
    std::cout << v1 << "到" << v2 << "的和为" << sum << std::endl;
    return 0;
}