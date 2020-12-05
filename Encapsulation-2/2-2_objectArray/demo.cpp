#include "Coordinate.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

/********************************************************/
/* 对象数组
要求：
    定义 Coordinate 类
    数据成员：m_iX 和 m_iY
    分别从栈和堆中实例化长度为3的对象数组
    给数组中的元素分别赋值
    遍历两个数组

*/
/*******************************************************/

int main(void)
{
    Coordinate coor[3]; //stack instantiation
    coor[0].m_iX = 3;
    coor[0].m_iY = 5;

    Coordinate *p = new Coordinate[3]; //heap instantiation
    p->m_iX = 7;
    p[0].m_iY = 9;

    p++;
    p->m_iX = 11;
    p->m_iY = 13;

    p[1].m_iX = 15;
    p++;
    p->m_iY = 17;

    for (int i = 0; i < 3; i++)
    {
        cout << "coor_x " << coor[i].m_iX << ", "
             << "coor_y " << coor[i].m_iY << endl;
    }
    for (int j = 0; j < 3; j++)
    {
        cout << "p_x " << p->m_iX << ", "
             << "p_y " << p->m_iY << endl;
        p--;
    }

    p++;
    delete[] p;
    p = NULL;
    return 0;
}