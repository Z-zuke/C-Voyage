#include <iostream>
#include "Bird.h"
#include "Plane.h"
using namespace std;

/***********************************************/
/* RTTI
    1.Flyable类，成员函数：takeoff, land
    2.Plane类，成员函数：takeoff, land, carry
    3.Bird类，成员函数：takeoff, land, foraging
    4.全局函数 doSomething(Flyable *obj)
dynamic_cast 注意事项：
    - 只能应用于指针和引用的转换；
    - 要转换的类型中必须包含虚函数；
    - 转换成功返回子类地址，失败返回 NULLL；
typeid 注意事项：
    - typeid 返回一个 type_info 对象的引用；
    - 如果想通过基类的指针获得派生类的数据类型，基类必须带有虚函数；
    - 只能获取对象的实际类型；

*/
/***********************************************/

void doSomething(Flyable *obj)
{
    cout << typeid(*obj).name() << endl;
    obj->takeoff();
    if(typeid(*obj)==typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj)==typeid(Plane))
    {
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
}

int main(void)
{
    Bird b;
    doSomething(&b);
    Plane p;
    doSomething(&p);

    int i = 0;
    cout << typeid(i).name() << endl;

    Flyable *bf = new Bird();
    cout << typeid(bf).name() << endl;  // P7Flyable
    cout << typeid(*bf).name() << endl;  // 4Bird
    return 0;
}