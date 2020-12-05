#include <iostream>
#include <stdlib.h>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/* Teacher 类
    自定义拷贝构造函数
数据：
    名字
    年龄
成员函数：
    数据成员的封装函数
*/
/**********************************************************/

void test(Teacher t)
{

}
int main(void)
{
    Teacher t1;
    Teacher t2("Merry", 22);
    Teacher t3 = t1;
    Teacher t4(t2);
    test(t1);
    cout << t1.getName() << " " << t1.getAge() << endl;
    cout << t2.getName() << " " << t2.getAge() << endl;
    // cout << t3.getName() << " " << t3.getAge() << endl;  //拷贝构造函数中没有实现拷贝过程
    // cout << t4.getName() << " " << t4.getAge() << endl;

    return 0;
}