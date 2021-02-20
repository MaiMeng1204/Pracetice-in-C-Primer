#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1;
    int count = 1;
    while (std::cin >> item2){
        if (item2.isbn() == item1.isbn()){
            ++count;
        }
        else {
            std::cout << item1 << " has " << count << " records."<< std::endl;
            item1 = item2;
            count = 1;
        }
    }
    std::cout << item1 << " has" << count << " records." << std::endl;
    return 0;
}