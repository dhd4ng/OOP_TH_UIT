#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include "GiaSuc.h"

int main() {
	int soBo = 0, soCuu = 0, soDe = 0;
	
	do {
		cout << "Nhap so luong bo: "; cin >> soBo;
		if (soBo < 0) cout << "Khong du so luong, moi nhap lai!";
	} while (soBo < 0);

	do {
		cout << "Nhap so luong cuu: "; cin >> soCuu;
		if (soCuu < 0) cout << "Khong du so luong, moi nhap lai!";
	} while (soCuu < 0);

	do {
		cout << "Nhap so luong de: "; cin >> soDe;
		if (soDe < 0) cout << "Khong du so luong, moi nhap lai!";
	} while (soDe < 0);

	int n = soBo + soCuu + soDe;
	vector<GiaSuc*> list(n);
	int i = 0;
	for (i; i < soBo; i++)
		list[i] = new Bo;
	for (i; i < soBo + soCuu; i++)
		list[i] = new Cuu;
	for (i; i < n; i++)
		list[i] = new De;

	//Cau a
	cout << "\t===========" << endl;
	for (int j = 0; j < n; j++)
		list[j]->Keu();
	cout << endl;
	cout << "\t===========" << endl;

	//Cau b
	int j = 0;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (j; j < soBo; j++)
		sum1 += list[j]->SinhCon();
	for (j; j < soBo + soCuu; j++)
		sum2 += list[j]->SinhCon();
	for (j; j < n; j++)
		sum3 += list[j]->SinhCon();
	
	cout << "So luong gia suc trong nong trai sau khi sinh con la: " << endl;
	cout << "Bo: " << soBo + sum1 << endl;
	cout << "De: " << soCuu + sum2 << endl;
	cout << "Cuu: " << soDe + sum3 << endl;

	int litSua = 0; 
	for (int j = 0; j < n; j++)
		litSua += list[j]->ChoSua();
	cout << "Tong so lit sua: " << litSua << endl;
}