#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
    friend Coordinate &operator-(Coordinate &c);  // 友元函数的运算符重载

public:
    Coordinate(int x, int y);
    // Coordinate &operator-(); // 成员函数的运算符重载
    Coordinate &operator++(); //前置 ++ 运算符
    Coordinate operator++(int); // 后置 ++ 运算符

    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif