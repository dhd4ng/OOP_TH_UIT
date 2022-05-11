#include "Nguoi.h"

Nguoi::Nguoi()
{
}

Nguoi::Nguoi(string ten, string ngaySinh)
{
    this->ten = ten;
    this->ngaySinh = ngaySinh;
}

string Nguoi::getTen()
{
    return ten;
}

string Nguoi::getNgaySinh()
{
    return ngaySinh;
}

void Nguoi::setTen(string ten)
{
    this->ten = ten;
}

void Nguoi::setNgaySinh(string ngaySinh)
{
    this->ngaySinh = ngaySinh;
}

Nguoi::~Nguoi()
{
}
