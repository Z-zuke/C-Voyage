#include "Circle.h"

Circle::Circle(double r)
{
    cout << "Circle(double r)" << endl;
}
Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

double Circle::calcArea()
{
    cout << "Circle::calcArea()" << endl;
    return 3.14 * m_dR * m_dR;
}