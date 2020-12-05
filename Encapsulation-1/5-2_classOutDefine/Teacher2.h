#include <string>
using namespace std;

class Teacher2
{
public:
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void teach();

private:
    string m_strName;
    string m_strGender;
    int m_iAge;
};