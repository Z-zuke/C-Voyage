/*
定义一个动物（animal）类，要求含有虚函数eat和纯虚函数move以及数据成员m_strName，并定义构造函数和虚析构函数
定义一个狗（Dog）类，要求公有继承动物类，定义构造函数和虚析构函数，并实现自己的eat和move函数

通过动物类实例化狗类，调用狗类当中的成员函数
*/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
 * 定义动物类：Animal
 * 虚函数：eat()
 * 纯虚函数：move()
 * 数据成员：m_strName
 */
class Animal
{
public:
    // 默认构造函数
    Animal(){}
    // 含参构造函数
	Animal(string name){m_strName = name; cout << "Animal" << endl;}
    // 虚析构函数
	virtual ~Animal(){cout << "~Animal" << endl;}
    // 虚成员函数
	virtual void eat(){cout << "Animal--" << m_strName << "-- eat" << endl;}
    // 纯虚函数
	virtual void move() =0;
public:
    // 数据成员
	string m_strName;
};

/**
 * 定义狗类：Dog
 * 公有继承动物类
 * 虚成员函数：eat()、move()
 */
class Dog : public Animal {
public:
    // 默认构造函数
    Dog(){}
    // 含参构造函数
	Dog(string name){m_strName = name; cout << "Dog" << endl;}
    // 虚析构函数
	virtual ~Dog(){cout << "~Dog" << endl;}
    // 虚成员函数eat()
	virtual void eat(){cout << "Dog--" << m_strName << " -- eat" << endl;}
    // 虚成员函数move()
	virtual void move(){cout << "Dog--" << m_strName << " -- move" << endl;}
public:
    // 数据成员
	string m_strName;
};

int main(void)
{
    // 通过动物类实例化狗类
    Animal *p=new Dog("dog");
    // 调用成员函数
	p->eat();
    p->move();
    // 释放内存
	delete p;
	p=NULL;
    
	return 0;
}