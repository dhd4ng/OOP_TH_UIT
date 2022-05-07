#include "ThoiGian.h"

ThoiGian::ThoiGian()
{
	hour = 1;
	minute = 0;
	second = 0;
}

ThoiGian::ThoiGian(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

ThoiGian::~ThoiGian()
{

}

void ThoiGian::setHour(int hour)
{
	this->hour = hour;
}

void ThoiGian::setMinute(int minute)
{
	this->minute = minute;
}

void ThoiGian::setSecond(int second)
{
	this->second = second;
}

void ThoiGian::setTime(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

int ThoiGian::getHour()
{
	return hour;
}

int ThoiGian::getMinute()
{
	return minute;
}

int ThoiGian::getSecond()
{
	return second;
}
