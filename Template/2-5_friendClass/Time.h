#pragma once
#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Match;
class Time
{
	friend Match;

public:
	Time(int hour, int min, int second);

private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif // !TIME_H
