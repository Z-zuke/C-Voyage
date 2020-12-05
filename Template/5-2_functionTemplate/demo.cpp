#include <iostream>
using namespace std;

/*********************************************/
/* 函数模板
    要求定义函数模板 display
*/
/*********************************************/

template <typename T>  // 函数模板
void display(T a)
{
    cout << a << endl;
}

template <typename T, class S>
void display(T t, S s)
{
    cout << t << "," << s << endl;
}

template <typename T, int Ksize>
void display(T a)
{
    for (int i = 0; i < Ksize;i++)
    {
        cout << a << endl;
    }
}

int main(void)
{
    display<int>(10);  // 模板函数
    display<double>(10.5);

    display<int, double>(5, 8.3);

    display<int, 6>(5);

    return 0;
}