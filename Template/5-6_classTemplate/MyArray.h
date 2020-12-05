#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
using namespace std;
// 类模板，必须将类的定义和声明写在同一个文件
template <typename T, int Ksize, int Kval>
class MyArray
{
public:
    MyArray();
    ~MyArray() // 函数定义在类内部
    {
        delete[] m_pArr;
        m_pArr = NULL;
    }
    void display();

private:
    T *m_pArr;
};

template <typename T, int Ksize, int Kval> // 函数定义写在外部
MyArray<T, Ksize, Kval>::MyArray()
{
    m_pArr = new T[Ksize];
    for (int i = 0; i < Ksize; i++)
    {
        m_pArr[i] = Kval;
    }
}

template <typename T, int Ksize, int Kval>
void MyArray<T, Ksize, Kval>::display()
{
    for (int i = 0; i < Ksize; i++)
    {
        cout << m_pArr[i] << endl;
    }
}

#endif