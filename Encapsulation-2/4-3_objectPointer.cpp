/*
定义一个坐标类，在堆上实例化坐标对象，并给出坐标（3，5），
然后打印坐标信息，销毁坐标对象。
*/

#include <iostream>
using namespace std;
class Coordinate
{
    
public:
	Coordinate(int x, int y)
	{
		// 设置X,Y的坐标
		m_iX=x;
        m_iY=y;
	}
public:
	int m_iX;
	int m_iY;
};

int main(void)
{
    // 在堆上创建对象指针
	Coordinate *p=new Coordinate(3,5);
    // 打印坐标
	cout <<"("<<p->m_iX<<","<<p->m_iY<<")" << endl;
    // 销毁对象指针
	delete p;
	p=NULL;
	return 0;
}