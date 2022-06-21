#include<iostream>
#include"Area.h"
using namespace std;
int main() {
    Area Shapes;
    int temp;
    do {
        cout << "1. Nhap kich thuoc cac hinh.\n";
        cout << "2. Hien thi dien tich va chu vi cac hinh da nhap.\n";
        cout << "3. Ket thuc chuong trinh\n";
        cin >> temp;
        switch (temp)
        {
        case 1:
            Shapes.InputShapes();
            break;
        case 2:
            Shapes.PrintAllShape();
            break;
        default:
            break;
        }
    } while (temp != 3);
}