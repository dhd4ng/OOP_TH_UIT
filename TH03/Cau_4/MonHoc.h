#pragma once
#include "SinhVien.h"
#include <iostream>
using namespace std;
class MonHoc
{
private:
    string tenMon;
    string maMon;
    SinhVien* list;

public:
    static int soMH;
    MonHoc();
    ~MonHoc();
    MonHoc(string tenMon, string maMon, SinhVien* list);

    string getTenMon();
    string getMaMon();

    void setTenMon(string tenMon);
    void setMaMon(string maMon);
};

