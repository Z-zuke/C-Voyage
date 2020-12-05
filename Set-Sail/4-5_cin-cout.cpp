#include <stdlib.h>
#include <iostream>
using namespace std;


// 要求：提示用户输入一个整数，将该整数分别以 8进制，10进制， 16进制打印在屏幕上
// 要求：提示用户输入一个布尔值（0或1），以布尔方式将值打印在屏幕上

int main()
{
    cout << "请输入一个整数：" << endl;
    int x = 0;
    cin >> x;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    cout << "请输入一个布尔值：" << endl;
    bool y = false;
    cin >> y;
    cout << boolalpha << y << endl;
    return 0;
}