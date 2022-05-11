#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
class GiaSuc
{
protected:
	float sua;
	int de;
public:
	GiaSuc();

	virtual float ChoSua() = 0;
	virtual int SinhCon() = 0;
	virtual void Keu() = 0;
	
	~GiaSuc();
};

