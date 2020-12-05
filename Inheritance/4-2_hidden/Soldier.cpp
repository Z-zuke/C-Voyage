#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{

}

void Soldier::play()
{
    cout << "Soldier::play" << endl;
    cout << m_strName << endl;
    cout << Person::m_strName << endl;
}
void Soldier::work()
{
    m_strName = "Jim";
    Person::m_strName = "Jame";
    cout << "Soldier::work()" << endl;
}