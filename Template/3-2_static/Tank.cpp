#include "Tank.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 10;

Tank::Tank(char code)
{
    m_cCode = code;
    s_iCount++;
    cout << "Tank" << endl;
}
Tank::~Tank()
{
    s_iCount--;
    cout << "~Tank()" << endl;
}

void Tank::fire()
{
    cout << "fire()" << endl;
}
int Tank::getCount()  //静态成员函数不会传入隐形的 this 指针
{
    return s_iCount;
}