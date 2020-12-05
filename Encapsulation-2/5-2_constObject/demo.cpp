#include "Line.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

/********************************************************/
/* 常对象成员，常函数，常对象，常指针，常引用(5-6)
要求：
    定义两个类：
        坐标类：Coordinate
        数据成员：m_iX, m_iY
        成员函数：构造函数、析构函数、数据封装函数
        线段类：Line
        数据成员：A m_coorA, B m_coorB
        成员函数：构造函数、析构函数、数据封装函数、信息打印函数
*/
/*******************************************************/

int main(void)
{
    const Line line(1, 2, 3, 4);
    line.printInfo();

    return 0;
}