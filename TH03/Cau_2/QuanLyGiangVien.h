#pragma once
#include <iostream>
#include "GiangVien.h"
#include <string>
using namespace std;
class QuanLyGiangVien
{
private:
	GiangVien* list;
public:
	QuanLyGiangVien();
	~QuanLyGiangVien();

	void NhapGV();
};

