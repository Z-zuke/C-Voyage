#include<iostream>
#include<stdlib.h>
#include"Worker.h"
#include"Dustman.h"
using namespace std;

/**************************************************/
/* 纯虚函数抽象类
	1.Person类，成员函数：构造函数，虚析构函数，纯虚函数work=0，
				数据成员：m_strName;
	2.Worker类，成员函数：构造函数，work，
				数据成员：m_iAge;
	3.Dustman类，成员函数：构造函数，work

*/
/**************************************************/

int main(void)
{
	Dustman dust("张三",12);
	return 0;
}