#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include"Shape.h"
using namespace std;

class Circle:public Shape
{
public:
	Circle(int r);
   ~Circle();

protected:
	int m_dR;
};

#endif