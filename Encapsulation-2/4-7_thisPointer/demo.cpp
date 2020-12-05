#include "Array.h"
#include <iostream>
using namespace std;

/******************************************************/
/* 示例安排
    定义一个 Array 类
    数据成员：m_iLen 表示数组长度
    成员函数：
      构造函数、析构函数、len 的封装函数、信息输出函数
*/
/*****************************************************/

int main(void)
{
  Array arr1(10);
  arr1.printInfo()->setLen(5);
  cout << arr1.getLen() << endl;
  cout << &arr1 << endl;
  return 0;
}