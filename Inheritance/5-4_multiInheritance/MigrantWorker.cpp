#include"MigrantWorker.h"
#include<iostream>
using namespace std;

MigrantWorker::MigrantWorker(string name, string code):Worker(code),Farmer(name)
{
	cout << "MigrantWorker()" << endl;	
}

MigrantWorker::~MigrantWorker()
{
	cout << "~MigrantWorker()" << endl;
}