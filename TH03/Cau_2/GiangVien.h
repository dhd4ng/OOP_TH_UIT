#pragma once
#include <iostream>
#include <string>
using namespace std;
class GiangVien
{
private:
	int MSGV;
	string name;
	string major;
public:
	static int soGV;
	GiangVien();
	GiangVien(int msgv, string name, string major);
	~GiangVien();

	int getMSGV();
	string getName();
	string getMajor();

	void XuatGV();

	void setMSGV(int msgv);
	void setName(string name);
	void setMajor(string major);
};

