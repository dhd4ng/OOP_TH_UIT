#include "CaSi.h"

CaSi::CaSi()
{
}

CaSi::CaSi(string ten, string ngaySinh, string nickName) : Nguoi(ten, ngaySinh)
{
	this->nickName = nickName;
}

void CaSi::setNickName(string nickName)
{
	this->nickName = nickName;
}

string CaSi::getNickName()
{
	return nickName;
}

void CaSi::getInfo()
{
	cout << "Nhap thong tin ca si" << endl;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaySinh);
	cout << "Nhap nickame: "; getline(cin, nickName);
}

void CaSi::display()
{
	cout << "Ca si: " << ten << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Nickname: " << nickName << endl;
}

CaSi::~CaSi()
{
}
