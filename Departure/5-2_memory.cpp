#include <iostream>
using namespace std;

int main(void)
{
    int *p = new int;
    *p = 20;
    cout << *p << endl;
    delete p;
    p = NULL;

    int *q = new int[100];
    if (NULL == q)
    {
        return 0;
    }
    q[0] = 10;
    q[1] = 20;
    cout << q[0] << "," << q[1] << endl;
    delete[] q;
    q = NULL;

    return 0;
}