#include <iostream>

int main()
{
    //std::cout << "/*";  // /*
    //std::cout << "*/";  // */
    //std::cout << /* "*/" */;  // warning: missing terminating " character
    std::cout << /* "*/" /* "/*" */;    //  /* 
    return 0;
}