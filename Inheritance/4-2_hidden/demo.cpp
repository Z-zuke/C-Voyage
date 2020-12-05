#include <iostream>
#include "Soldier.h"
using namespace std;

/**********************************************/
/* 继承关系中的隐藏
要求：
    1.定义 Person 类，要求含有 m_strName 以及构造函数和 play()
    2.定义 Soldier 类，数据成员无 、构造函数、play 函数、work 函数
*/
/**********************************************/

int main(void)
{
    Soldier soldier;
    soldier.work();
    soldier.play();
    soldier.Person::play();

    return 0;
}