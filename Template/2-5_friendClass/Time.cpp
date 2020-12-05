#include"Time.h"
#include <iostream>
using namespace std;

Time::Time(int hour,int min,int second)
{
	m_iHour = hour;
	m_iMinute = min;
	m_iSecond = second;
}

void Time::printTime()
{
	cout << m_iHour << " hour " << m_iMinute << " minute " << m_iSecond <<" second "<< endl;
}