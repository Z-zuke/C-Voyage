#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
    m_iX = x;
    m_iY = y;
}

int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;
}

// Coordinate &Coordinate::operator-()  // 负号运算符重载
// {
//     this->m_iX = -this->m_iX;
//     m_iY = -m_iY;
//     return *this;
// }

Coordinate &operator-(Coordinate &c)  // 负号运算符重载
{
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;
}

Coordinate &Coordinate::operator++() // 前置++
{
    m_iX += 1;
    m_iY ++;
    return *this;
}

Coordinate Coordinate::operator++(int) // 后置++
{
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;
    return old;
}