#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(string name = "Jim", int age = 20, const int m=100);
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void teach();
    int getMax();

private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};