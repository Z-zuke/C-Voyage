//继承谁引用谁
#include"Person.h"

class Worker :virtual public Person
{
public:
	Worker(string code = "001",string color="blue");
	virtual ~Worker();
	void work();
	void carry();
protected:
	string m_strCode;
};