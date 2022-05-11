#pragma once
#include "Nguoi.h"
class CaSi : public Nguoi
{
private:
	string nickName;
public:
	CaSi();
	CaSi(string ten, string ngaySinh, string nickName);

	void setNickName(string nickName);
	string getNickName();
	void getInfo();
	void display();

	~CaSi();
};

