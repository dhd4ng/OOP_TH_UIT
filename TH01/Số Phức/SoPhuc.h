#pragma once
class SoPhuc {
private:
    double thuc, ao;
public:
    SoPhuc();
    SoPhuc(double thuc, double ao);

    void Nhap();
    void Xuat();
    void GiaTri();
    //getter
    double getPhanThuc();
    double getPhanAo();

    //setter
    void setPhanThuc(double thuc);
    void setPhanAo(double ao);

    SoPhuc Cong(SoPhuc b);
    SoPhuc Tru(SoPhuc b);
    SoPhuc Nhan( SoPhuc b);
    SoPhuc Chia(SoPhuc b);
    ~SoPhuc();
};