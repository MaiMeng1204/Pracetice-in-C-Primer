#include <iostream>

int main()
{
    int sum = 0, value = 0;
    std::cout << "输入需要相加的数：" << std::endl;     // 输入文件结束符的方法是ctrl+z，然后再按enter
    while (std::cin >> value){
        sum += value;
    }
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}