#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier(string name, int age)
{
    m_strName = name;
    m_iAge = age;
    cout << "Soldier()" << endl;
}
Soldier::~Soldier()
{
    cout << "~Soldier()" << endl;
}

void Soldier::work()
{

    cout << "Soldier::work()" << endl;
}