#include <stdlib.h>
#include <iostream>
using namespace std;


// Ҫ����ʾ�û�����һ�����������������ֱ��� 8���ƣ�10���ƣ� 16���ƴ�ӡ����Ļ��
// Ҫ����ʾ�û�����һ������ֵ��0��1�����Բ�����ʽ��ֵ��ӡ����Ļ��

int main()
{
    cout << "������һ��������" << endl;
    int x = 0;
    cin >> x;
    cout << oct << x << endl;
    cout << dec << x << endl;
    cout << hex << x << endl;

    cout << "������һ������ֵ��" << endl;
    bool y = false;
    cin >> y;
    cout << boolalpha << y << endl;
    return 0;
}