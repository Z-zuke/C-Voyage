#include <iostream>
#include <stdlib.h>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/* Teacher 类
    自定义无参构造函数
    自定义有参构造函数
数据：
    名字
    年龄
成员函数：
    数据成员的封装函数
*/
/**********************************************************/


int main(void)
{
    Teacher t1;
    Teacher t2("Merry", 31);
    Teacher t3("Jane");
    cout << t1.getName() << " " << t1.getAge() << endl;
    cout << t2.getName() << " " << t2.getAge() << endl;
    cout << t3.getName() << " " << t3.getAge() << endl;

    return 0;
}