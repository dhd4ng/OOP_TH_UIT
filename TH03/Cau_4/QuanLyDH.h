#include "GiangVien.h"
#include "MonHoc.h"
class QuanLyDH
{
private:
	int soSinhVien;
	int soMonHoc;
	int soGiangVien;
	SinhVien* listSinhVien;
	GiangVien* listGiangVien;
	MonHoc* listMonHoc;
public:
	QuanLyDH();
	~QuanLyDH();

	void taoMon();
	void display();
};

