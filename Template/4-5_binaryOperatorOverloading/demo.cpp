#include "Coordinate.h"
#include <iostream>
using namespace std;

/***********************************************/
/* 二元运算符重载
要求：
    1.定义Coordinate坐标类，成员函数：构造函数，get_X, get_Y
        数据成员：m_iX, m_iY
    2.+号运算符重载（成员函数，友元函数）
    3.<< 输出运算符重载  --> 必须为友元函数重载
    4.[] 索引运算符重载  --> 必须为成员函数重载

*/
/***********************************************/

int main(void)
{
    Coordinate coor1(1, 3);
    Coordinate coor2(2, 4);
    Coordinate coor3(0, 0);
    coor3 = coor1 + coor2;
    // cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor3 << endl;
    cout << coor3[0] << "," << coor3[1] << endl;

    return 0;
}