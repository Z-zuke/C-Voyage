#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(string name = "Jim", int age = 20);
    Teacher(const Teacher &); // 拷贝构造函数
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void teach();

private:
    string m_strName;
    int m_iAge;
};