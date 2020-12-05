#include "Person.h"

class Worker : public Person
{
public:
    Worker();
    ~Worker();
    void work();

public:
    int m_iSalary;
};