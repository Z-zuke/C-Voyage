#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>

/********************************/
/* 通过使用标准模板库，学习其用法 */
/*******************************/

int main(void)
{
	vector<int> vec;
	vec.push_back(3);//向量尾部增加一个元素
	vec.push_back(4);
	vec.push_back(5);
	//vec.pop_back();//删除向量中最后一个元素
	//cout << vec.size() << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << "-----------------------horizontal-------------------" << endl;
	//迭代器
	vector<int>::iterator itor = vec.begin();
	//cout << *itor << endl;
	for (; itor != vec.end(); itor++)
	{
		cout << *itor << endl;
	}
	cout << "-----------------------horizontal-------------------" << endl;
	cout << vec.front() << endl;//vec的首元素
	cout << vec.back() << endl;//vec.末尾元素
	return 0;
}