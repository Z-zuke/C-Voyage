#include <iostream>
#include "Worker.h"
using namespace std;

/**********************************************/
/* 继承
要求：
    1.定义 Person 类，要求含有 m_strName 和 m_iAge 以及构造函数和析构函数，eat 函数
    2.定义 Worker 类，要求共有继承 Person 类，含有数据成员 m_iSalary、构造函数、析构函数、work 函数
*/
/**********************************************/

int main(void)
{
    Worker *p = new Worker();
    p->m_strName = "Jim";
    p->m_iAge = 10;
    p->eat();
    p->m_iSalary = 10000;
    p->work();
    
    delete p;
    p = NULL;
    return 0;
}