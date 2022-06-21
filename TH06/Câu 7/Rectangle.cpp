#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    SetNumEdge(Edge);
}
Rectangle::~Rectangle()
{
}
void Rectangle::Set()
{
    do
    {
        vector<double> l;
        l.resize(GetNumEdge());
        cout << "Nhap chieu rong: ";
        cin >> l[0];
        cout << "Nhap chieu dai: ";
        cin >> l[1];
        SetLength(l);
        this->CaculateArea();
        this->CaculateCircuit();
    } while (this->Check() == 0);
}

void Rectangle::Print()
{
    cout << "Hinh chu nhat: ";
    Shape::Print();
}
void Rectangle::CaculateArea()
{
    vector<double> l = GetLength();
    SetAreaValue(l[0] * l[1]);
}
void Rectangle::CaculateCircuit()
{
    vector<double> l = GetLength();
    SetCircuitValue(l[0] * 2 + l[1] * 2);
}
Shape* Rectangle::CreateObject()
{
    Shape* Object = new Rectangle;
    return Object;
}