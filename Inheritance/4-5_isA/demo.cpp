#include "Soldier.h"
#include <iostream>
using namespace std;

/**********************************************/
/* 公有基础 is a
要求：
    1.定义 Person 类，要求含有 m_strName 以及构造函数、析构函数和 play()
    2.定义 Soldier 类，数据成员 m_iAge 、构造函数、析构函数、work 函数
    3.定义函数 test1(Person p) test2(Person &p) test3(Person *p)
*/
/**********************************************/

void test1(Person p)
{
    p.play();
}
void test2(Person &p)
{
    p.play();
}
void test3(Person *p)
{
    p->play();
}

int main(void)
{
    // Soldier soldier;
    // Person *p = &soldier;
    // p->play();

    // Person *p = new Soldier;
    // p->play();
    // delete p;
    // p = NULL;

    Person p;
    Soldier s;
    test2(p);
    test2(s);

    return 0;
}