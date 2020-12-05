#include <stdlib.h>
#include <iostream>
using namespace std;

void fun(const int &a, const int &b);
int main(void)
{
    int x = 3;
    int y = 5;
    int *const p = &x; // const 修饰 p 指针
    *p = 10;
    cout << x << endl;

    int const *d = &x;  // *d 不能修改值
    d = &y;
    cout << *d << endl;

    // int const &z = x;  // const 修饰引用
    
    return 0;
}

void fun(const int &a, const int &b)
{
    // a = 10; // const 修饰参数，不能修改
}