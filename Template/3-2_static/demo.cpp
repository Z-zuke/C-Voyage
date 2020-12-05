#include "Tank.h"
#include <iostream>
using namespace std;

/***********************************************/
/* 静态数据成员和静态成员函数
要求：
    定义Tank类，数据成员：m_cCode, s_iCount,
    成员函数：构造函数，析构函数，fire, getCount
static 注意事项：
    - 静态数据成员必须单独初始化；
    - 静态成员函数不能调用非静态成员函数和非静态数据成员
    - 静态数据成员只有一份，且不依赖对象而存在
*/
/**********************************************/

int main(void)
{
    cout << Tank::getCount() << endl;
    Tank t1('A');
    cout << t1.getCount() << endl;

    Tank *p = new Tank('B');
    cout << p->getCount() << endl;

    delete p;
    p = NULL;
    cout << Tank::getCount() << endl;
    return 0;
}