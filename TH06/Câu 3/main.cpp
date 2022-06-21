#include "KH.h"
#include "KHA.h"
#include "KHB.h"
#include "KHC.h"
#include <iostream>
#include <fstream>
#include <vector>

int main(){
	ifstream file;
	file.open("XYZ.INP.txt");
    if (!file.is_open())
    {
        cout << "Can't open file\n";
    }
    else 
    {
        int x, y, z;
        file >> x;
        file >> y;
        file >> z;
        double tong = 0;
        vector<KH*> listKH;
        listKH.resize(0);
        for (int i = 0; i < x; i++) {
            listKH.push_back(new KHA);
            listKH.back()->operator>>(file);
            tong += listKH.back()->TinhTien();
        }
        for (int i = 0; i < y; i++) {
            listKH.push_back(new KHB);
            listKH.back()->operator>>(file);
            tong += listKH.back()->TinhTien();
        }
        for (int i = 0; i < z; i++) {
            listKH.push_back(new KHC);
            listKH.back()->operator>>(file);
            tong += listKH.back()->TinhTien();
        }
        file.close();
        ofstream File;
        File.open("XYZ.OUT.txt");
        File << x << " " << y << " " << z << endl;
        for (int i = 0; i < listKH.size(); i++)
            (*listKH[i]).operator<<(File);
        File << "Tong so tien cong ty thu duoc: " << tong << endl;
        File.close();
    }
}