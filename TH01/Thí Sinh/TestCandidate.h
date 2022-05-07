#pragma once
#include <iostream>
#include <string>
#include "ThiSinh.h"
using namespace std;
class TestCandidate
{
private:
	ThiSinh* phongThi;
	int soLuong;
public:
	TestCandidate();
	~TestCandidate();

	void nhapThiSinh();
	void inThiSinhtongdiemLH15();
};

