#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
private:
	int MSSV;
	string name;
	string address;
	string phone;
	char hocLuc;
public:
	static int soSV;
	SinhVien();
	SinhVien(int MSSV, string name, string address, string phone, char hocLuc);
	~SinhVien();

	int getMSSV();
	string getName();
	string getAddress();
	string getPhone();
	char getHocLuc();

	void XuatSV();

	void setMSSV(int mssv);
	void setName(string name);
	void setAddress(string address);
	void setPhone(string phone);
	void setHocLuc(char hocLuc);

};

