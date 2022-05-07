#pragma once
#include <string>
using namespace std;

class ThiSinh {
private:
	int id;
	string Name;
	string DateofBirth;
	float diemToan, diemVan, diemAnh;
public:
	ThiSinh();
	ThiSinh(int id, string Name, string DateofBirth, float diemToan, float diemVan, float diemAnh);
	~ThiSinh();

	//getter
	int getId();
	string getName();
	string getDoB();
	float getDT();
	float getDV();
	float getDA();

	//setter
	void setId();
	void setName();
	void setDoB();
	void setDT();
	void setDV();
	void setDA();

};