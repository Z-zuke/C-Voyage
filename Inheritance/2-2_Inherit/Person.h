#include <string>
using namespace std;

class Person
{
public:
    Person();
    ~Person();
    void eat();
public:
    string m_strName;
    int m_iAge;
};