#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

int main() {
	NhanVienSanXuat A; A.getInfo();
	NhanVienVanPhong B; B.getInfo();

	cout << "Tien luong cua nhan vien " << A.getTen() << " : " << A.getLuong() << endl;
	cout << "Tien luong cua nhan vien " << B.getTen() << " : " << B.getLuong() << endl;

}