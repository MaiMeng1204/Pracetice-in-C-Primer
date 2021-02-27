#include <iostream>

int main()
{
    int i = 1, *p1, *const p2 = &i;
    const int ic = 0, *const p3 = &ic;
    // i = ic;  // 合法
    // p1 = p3; // 不能将 "const int *" 类型的值分配到 "int *" 类型的实体
    // p1 = &ic;    // 不能将 "const int *" 类型的值分配到 "int *" 类型的实体
    // p3 = &ic;    // 表达式必须是可修改的左值
    // p2 = p1; // 表达式必须是可修改的左值
    // ic = *p3;    // 表达式必须是可修改的左值
}