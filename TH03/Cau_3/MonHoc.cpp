#include "MonHoc.h"

int MonHoc::soMH = 0;

MonHoc::MonHoc()
{
    soMH++;
}

MonHoc::~MonHoc()
{
}

MonHoc::MonHoc(string tenMon, string maMon, SinhVien* list)
{
    this->tenMon = tenMon;
    this->maMon = maMon;
    this->list = list;
}

string MonHoc::getTenMon()
{
    return this->tenMon;
}

string MonHoc::getMaMon()
{
    return this->maMon;
}

void MonHoc::setTenMon(string tenMon)
{
    this->tenMon = tenMon;
}

void MonHoc::setMaMon(string maMon)
{
    this->maMon = maMon;
}