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
拓展：
    定义可以带最多学生的个数，此为常量
*/
/**********************************************************/


int main(void)
{
    Teacher t1;
    Teacher t2("Merry", 22, 50);
    cout << t1.getName() << " " << t1.getAge() <<" "<<t1.getMax()<< endl;
    cout << t2.getName() << " " << t2.getAge() <<" "<<t2.getMax()<< endl;

    return 0;
}