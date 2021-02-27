#include <iostream>

int main()
{
    int i = 0;
    const int v2 = 0;
    int v1 = v2, *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    r1 = v2;    // 合法
    // p1 = p2;    // 不能将 "const int *" 类型的值分配到 "int *" 类型的实体
    p2 = p1;    // 合法
    // p1 = p3;    // 不能将 "const int *" 类型的值分配到 "int *" 类型的实体
    p2 = p3;    // 合法
}