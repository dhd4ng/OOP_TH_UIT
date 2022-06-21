#include <iostream>
#include "Area.h"
using namespace std;

Area::Area()
{
    arrShape.resize(0);
    TemplateShape.resize(0);
    TemplateShape.push_back(new Rectangle);
    TemplateShape.push_back(new Triangle);
    TemplateShape.push_back(new Circle);
}
Area ::~Area()
{
    for (int i = 0; i < arrShape.size(); i++)
    {
        delete arrShape[i];
    }
}
void Area::InputShapes()
{
    do
    {
        int id;
        for (int i = 0; i < TemplateShape.size(); i++)
        {
            cout << "   " << i + 1 << ". Nhap " << TemplateShape[i]->NameShape() << endl;
        }
        cout << "Press: ";
        cin >> id;
        arrShape.push_back(TemplateShape[id - 1]->CreateObject());
        arrShape.back()->Set();
        cout << "Nhan enter de tiep tuc, phim khac de thoat: ";
        fflush(stdin);
    } while (getchar() == '\n');
}
void Area::PrintAllShape()
{
    for (int i = 0; i < arrShape.size(); i++)
    {
        arrShape[i]->Print();
        cout << endl;
    }
}