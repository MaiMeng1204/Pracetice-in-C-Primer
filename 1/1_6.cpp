#include <iostream>

int main()
{
    std::cout << "输入两个数：" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << std::endl;
    std::cout << "and " << v2 << std::endl;
    std::cout << "is " << v1 + v2 << std::endl;
}
/*
1_6.cpp: In function 'int main()':
1_6.cpp:9:5: error: expected primary-expression before '<<' token
    << "and " << v2;
    ^~
1_6.cpp:10:5: error: expected primary-expression before '<<' token
    << "is " << v1 + v2 << std::endl;
    ^~
*/