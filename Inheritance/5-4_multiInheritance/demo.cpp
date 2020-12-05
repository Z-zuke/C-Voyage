#include"MigrantWorker.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	//多继承是指，A继承B和C
	MigrantWorker *m = new MigrantWorker("001", "Kroos");
	m->carry();
	m->sow();
	delete m;
	m = NULL;
	system("pause");
	return 0;
}