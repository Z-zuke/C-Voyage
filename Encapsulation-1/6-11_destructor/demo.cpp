#include <iostream>
#include <stdlib.h>
#include "Teacher.h"
using namespace std;

/**********************************************************/
/* Teacher 类
    1.自定义析构函数
    2.普通方式实例化的对象，在销毁对象是否自动调用析构函数
    3.通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构
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
    Teacher t1;  // 从栈中实例化
    Teacher *p = new Teacher();  // 从堆中实例化
    Teacher t3 = t1;  // 拷贝构造函数实例化
    test(t1);  // 普通函数实例化
    cout << t1.getName() << " " << t1.getAge() << endl;
    // cout << t3.getName() << " " << t3.getAge() << endl;  //拷贝构造函数中没有实现拷贝过程
    delete p;
    p = NULL;

    return 0;
}