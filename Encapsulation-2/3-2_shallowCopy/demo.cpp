#include "Array.h"
#include <iostream>
using namespace std;

/******************************************************/
/* 示例安排
    1.定义一个 Array 类，数据成员为 m_iCount,
      成员函数包括数据封装函数，构造函数，拷贝构造函数和
      析构函数，通过示例体会浅拷贝原理。
    2.增加数据成员 m_pArr, 并增加 m_pArr 地址查看函数，
      同时改造构造函数、拷贝构造函数和析构函数，体会深拷贝
      的原理和必要性。
*/
/*****************************************************/

int main(void)
{
    Array arr1(5);

    Array arr2(arr1);  // 浅拷贝

    arr1.printAddr();
    arr2.printAddr();

    arr1.printArr();
    cout << "" << endl;
    arr2.printArr();
    cout << "" << endl;

    return 0;
}