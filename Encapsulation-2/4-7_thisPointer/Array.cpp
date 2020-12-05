#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int len)
{
    this->len = len;
    cout << "Array(int len)" << endl;
}
Array::~Array()
{

}

Array *Array::setLen(int len)
{
    this->len = len;
    return this;
}
int Array::getLen()
{
    return len;
}
Array *Array::printInfo()  // return 引用和指针
{
    cout << this << endl;
    return this;
}