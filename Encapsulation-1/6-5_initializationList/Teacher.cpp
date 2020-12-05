#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

// 初始化列表
Teacher::Teacher(string name, int age, const int m):m_strName(name),m_iAge(age),m_iMax(m)
{
    cout << "Teacher(string name, int age)" << endl;
}


int Teacher::getMax()
{
    return m_iMax;
}
void Teacher::setName(string _name)
{
    m_strName = _name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setAge(int _age)
{
    m_iAge = _age;
}
int Teacher::getAge()
{
    return m_iAge;
}
void Teacher::teach()
{
    cout << "let's begin our lesson" << endl;
}