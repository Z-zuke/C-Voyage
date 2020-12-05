#include"Person.h"
#include<iostream>
using namespace std;
Person::Person(string name)
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}
