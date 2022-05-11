#include "CaSi.h"
#include "CongNhan.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"
#include "Nguoi.h"

int main() {
	vector<Nguoi*> list;
	list.resize(0);
	int temp;
	do {
		cout << "1. Nhap thong tin hoc sinh" << endl;
		cout << "2. Nhap thong tin sinh vien" << endl;
		cout << "3. Nhap thong tin cong nhan" << endl;
		cout << "4. Nhap thong tin ca si" << endl;
		cout << "5. Nhap thong tin nghe si" << endl;
		cout << "6. Xuat danh sach vua nhap" << endl;
		cin >> temp;
		switch (temp) {
		case 1: {
			list.push_back(new HocSinh);
			list.back()->getInfo();
			break;
		}
		case 2: {
			list.push_back(new SinhVien);
			list.back()->getInfo();
			break;
		}
		case 3: {
			list.push_back(new CongNhan);
			list.back()->getInfo();
			break;
		}
		case 4: {
			list.push_back(new CaSi);
			list.back()->getInfo();
			break;
		}
		case 5: {
			list.push_back(new NgheSi);
			list.back()->getInfo();
			break;
		}
		case 6: {
			for (int i = 0; i < list.size(); i++)
				list[i]->display();
		}
		default: break;
		}
	} while (temp != 6);
}