#include "Circle.h"

Circle::Circle(double r)
{
    cout << "Circle(double r)" << endl;
    m_dR = r;
    m_pCenter = new Coordinate(3, 5);  // 从堆中申请
}
Circle::~Circle()
{
    cout << "~Circle()" << endl;
    delete m_pCenter;
    m_pCenter = NULL;
}

double Circle::calcArea()
{
    cout << "Circle::calcArea()" << endl;
    return 3.14 * m_dR * m_dR;
}