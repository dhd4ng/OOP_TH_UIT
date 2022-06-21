#pragma once
#include "Sach.h"
class TapChi : public Sach
{
private:
	string theLoai;
public:
	TapChi();

	string getTheLoai();
	void setTheLoai(string theLoai);
	void getInfo();
	void display();

	~TapChi();
};

