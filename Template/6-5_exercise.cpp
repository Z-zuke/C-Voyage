/*
使用vector存储数字3，6,8,4，并遍历。
使用map存储S-Shang Hai   B-Bei Jing    G-Guang Zhou，并遍历
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);

    //循环打印数字
    vector<int>::iterator itor;
    for (itor = vec.begin(); itor != vec.end(); itor++)
    {
        cout << *itor << endl;
    }

    // 使用map来存储字符串键值对
    map<string, string> m;
    pair<string, string> p1("S", "Shang Hai");
    m.insert(p1);
    pair<string, string> p2("B", "Bei Jing");
    m.insert(p2);
    pair<string, string> p3("G", "Guang Zhou");
    m.insert(p3);

    // 打印map中数据
    map<string, string>::iterator itor2;
    for (itor2 = m.begin(); itor2 != m.end(); itor2++)
    {
        cout << itor2->first << endl;
        cout << itor2->second << endl;
    }
    return 0;
}