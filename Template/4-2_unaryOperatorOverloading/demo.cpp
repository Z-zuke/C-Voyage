#include "Coordinate.h"
#include <iostream>
using namespace std;

/***********************************************/
/* 一元运算符重载
要求：
    1.定义Coordinate坐标类，成员函数：构造函数，get_X, get_Y
        数据成员：m_iX, m_iY
    2.负号运算符重载（成员函数，友元函数）
    3.++运算符重载（前置++，后置++）

*/
/***********************************************/

int main(void)
{
    Coordinate coor1(1, 3);
    cout << coor1.getX() << "," << coor1.getY() << endl;
    -coor1; // coor1.operator-();
    cout << coor1.getX() << "," << coor1.getY() << endl;

    ++coor1;
    cout << coor1.getX() << "," << coor1.getY() << endl;

    cout << coor1++.getX() << endl;
    cout << coor1++.getY() << endl;
    cout << coor1.getX() << "," << coor1.getY() << endl;
    return 0;
}