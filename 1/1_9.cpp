#include <iostream>

int main()
{
    int val = 50, sum = 0;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "50到100的整数和为"
    << sum << std::endl;
    return 0;
}