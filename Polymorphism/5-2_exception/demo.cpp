#include <iostream>
#include "IndexException.h"
using namespace std;

/**********************************************/
/* 异常处理
    1.定义一个 Exception 类，成员函数：printException, 析构函数
    2.定义一个 IndexException 类，成员函数：printException()

*/
/**********************************************/
void test()
{
    throw IndexException();
}

int main(void)
{
    try
    {
        test();
    }
    catch (IndexException &e)
    {
        e.printException();
    }
    catch (...)
    {
        cout << "exception" << endl;
    }
    return 0;
}