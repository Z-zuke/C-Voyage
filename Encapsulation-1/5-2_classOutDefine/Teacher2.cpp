#include "Teacher2.h"
#include <iostream>
#include <string>
using namespace std;



void Teacher2::setName(string _name)
{
    m_strName = _name;
}
string Teacher2::getName()
{
    return m_strName;
}
void Teacher2::setGender(string _gender)
{
    m_strGender = _gender;
}
string Teacher2::getGender()
{
    return m_strGender;
}
void Teacher2::setAge(int _age)
{
    m_iAge = _age;
}
int Teacher2::getAge()
{
    return m_iAge;
}
void Teacher2::teach()
{
    cout << "let's begin our lesson" << endl;
}