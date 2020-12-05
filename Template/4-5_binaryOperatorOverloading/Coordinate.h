#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate
{
    friend Coordinate &operator-(Coordinate &c);  // 友元函数的运算符重载
    friend Coordinate operator+(Coordinate c1, Coordinate c2);
    friend ostream &operator<<(ostream &output, Coordinate &c);

public:
    Coordinate(int x, int y);
    // Coordinate &operator-(); // 成员函数的运算符重载
    Coordinate &operator++(); //前置 ++ 运算符
    Coordinate operator++(int); // 后置 ++ 运算符
    // Coordinate operator+(Coordinate &c); // + 运算符，第一个为 this,第二个为引用
    int operator[](int index);

    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif