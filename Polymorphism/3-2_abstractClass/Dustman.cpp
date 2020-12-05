#include "Dustman.h"
#include<iostream>
Dustman::Dustman(string name, int age):Worker(name,age)
{
	
}

void Dustman::work()
{
	cout << "扫地" << endl;
}