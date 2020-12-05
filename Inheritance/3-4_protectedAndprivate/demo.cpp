#include<iostream>
#include<stdlib.h>
#include"Infantry.h"
using namespace std;

/*********************************************/
/* 保护继承和私有继承
要求：
	1.Person 类，数据成员：m_strName, 成员函数：构造函数、play()
	2.Soldier 类，数据成员: m_iAge, 成员函数：构造函数、work()
	3.Infantry 步兵类，成员函数：attack()

*/
/********************************************/

int main(void)
{
	/*Soldier soldier;
	soldier.work();
	soldier.play();
	system("pause");*/
	Infantry in;
	in.attack();
	return 0;
}