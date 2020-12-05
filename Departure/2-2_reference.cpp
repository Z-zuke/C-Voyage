#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct
{
    int x;
    int y;
} Coord;

void fun(int &a, int &b);

int main(void)
{
    int a = 10;
    int &b = a;  // 变量引用
    b = 20;
    cout << a << endl;
    a = 30;
    cout << b << endl;

    Coord c;
    Coord &c1 = c;  // 结构体引用
    c1.x = 10;
    c1.y = 20;
    cout << c.x <<","<< c.y << endl;

    int *p = &a;
    int *&q = p; // 指针引用
    *q = 5;
    cout << a << endl;

    int x = 5, y = 10;
    cout << x << "," << y << endl;
    fun(x, y);  // 函数引用
    cout << x << "," << y << endl;

    return 0;
}

void fun(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}