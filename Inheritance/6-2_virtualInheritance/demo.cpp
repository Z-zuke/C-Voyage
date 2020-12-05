#include"MigrantWorker.h"
#include<iostream>
#include<string>
using namespace std;

/* 虚继承
要求：
	1.Famer类，数据成员：m_strName, 成员函数：构造函数、析构函数、sow()
	2.Worker类，数据成员：m_strCode, 成员函数：构造函数、析构函数、carry()
	3.MigrantWorker类，数据成员：无，成员函数：构造函数、析构函数
	4.Person类，数据成员：m_strColor, 成员函数：构造函数、析构函数、printColor()
*/
int main(void)
{
	/*菱形继承 多继承和多重继承会出现问题呢？ 如图，假设类a是父类，b类和c类都继承了a类，而d类又继承了b和c，
	那么由于d类进行了两次多重继承a类，就会出现两份相同的a的数据成员或成员函数，就会出现代码冗余。
	如何避免该情况的发生，就可以使用虚继承virtual*/
	MigrantWorker *m = new MigrantWorker("Mirry","200","yellow");
	m->Farmer::printColor();
	m->Worker::printColor();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}