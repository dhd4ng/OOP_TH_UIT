#include "QuanLySV.h"

QuanLySV::QuanLySV()
{
}

QuanLySV::~QuanLySV()
{
	delete[] list;
}

void QuanLySV::NhapSV()
{
	int soluong;
	cout << "Nhap so luong sinh vien: "; cin >> soluong;
	list = new SinhVien[soluong];
	int mssv;
	string name;
	string address;
	string phone;
	char hocluc;
	for (int i = 0; i < soluong; i++) {
		cout << "nhap thong tin sinh vien thu " << i + 1 << endl;
		cout << "Nhap MSSV: "; cin >> mssv;
		cin.ignore();
		cout << "Nhap ten sinh vien: "; getline(cin, name);
		cout << "Nhap dia chi: "; getline(cin, address);
		cout << "Nhap so dien thoai:"; getline(cin, phone);
		cout << "Nhap hoc luc: "; cin >> hocluc;

		SinhVien sv(mssv, name, address, phone, hocluc);
		list[i] = sv;
	}
}

void QuanLySV::SoSanhHL()
{
    int temp;
    cout << "Nhap so thu tu SV 1 can so sanh: ";
    cin >> temp;
    char tempA = list[temp - 1].getHocLuc();
    cout << "Nhap so thu tu SV 2 can so sanh: ";
    cin >> temp;
    char tempB = list[temp - 1].getHocLuc();
    if ((int)tempA == (int)tempB)
    {
        cout << "2 SV co hoc luc bang nhau.";
        return;
    }
    if (tempA == 'X' && tempB != 'X')
    {
        cout << "SV a co hoc luc cao hon.";
        return;
    }
    else if (tempA != 'X' && tempB == 'X')
    {
        cout << "SV b co hoc luc cao hon";
        return;
    }
    if ((int)tempA < (int)tempB)
        cout << "SV a co hoc luc cao hon.";
    else
        cout << "SV b co hoc luc cao hon.";
}
