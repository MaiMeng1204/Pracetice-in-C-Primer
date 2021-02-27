#include <iostream>

std::string global_str;
int global_int;  // 0
int main()
{
    std::cout << global_str << std::endl;  // 空串
    std::cout << global_int << std::endl;
    std::string local_str;  // 空字符串
    std::cout << local_str << std::endl;
    int local_int;  // 0
    std::cout << local_int << std::endl;
}