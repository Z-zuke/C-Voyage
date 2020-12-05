#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int count)
{
    m_iCount = count;
    m_pArr = new int[m_iCount];
    for (int i = 0; i < m_iCount;i++)
    {
        m_pArr[i] = i;
    }
        cout << "Array()" << endl;
}
Array::Array(const Array &arr)
{
    // m_pArr = arr.m_pArr;  // 浅拷贝

    m_iCount = arr.m_iCount;
    m_pArr = new int[m_iCount]; // 深拷贝
    for (int i = 0; i < m_iCount; i++)
    {
        m_pArr[i] = arr.m_pArr[i];
    }
    cout << "Array(const Array &)" << endl;
}
Array::~Array()
{
    delete[] m_pArr;
    m_pArr = NULL;
    cout << "~Array()" << endl;
}

void Array::setCount(int count)
{
    m_iCount = count;
}
int Array::getCount()
{
    return m_iCount;
}

void Array::printAddr()
{
    cout << "m_pArr value is: " << m_pArr << endl;
}
void Array::printArr()
{
    for (int i = 0; i < m_iCount; i++)
    {
        cout << m_pArr[i];
    }
}