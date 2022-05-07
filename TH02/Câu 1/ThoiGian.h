#pragma once
class ThoiGian
{
private:
	int hour;
	int minute;
	int second;
public:
	ThoiGian();
	ThoiGian(int hour, int minute, int second);
	~ThoiGian();

	//setter
	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);
	void setTime(int hour, int minute, int second);

	//getter
	int getHour();
	int getMinute();
	int getSecond();


};

