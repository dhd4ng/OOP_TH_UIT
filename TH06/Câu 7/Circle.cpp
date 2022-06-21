#include<iostream>
#include"Circle.h"
using namespace std;

Circle::Circle()
{
    SetNumEdge(Edge);
}
Circle::~Circle()
{
}
void Circle::Set()
{
    do
    {
        vector<double> l;
        l.resize(GetNumEdge());
        cout << "Nhap ban kinh: ";
        cin >> l[0];
        SetLength(l);
        this->CaculateArea();
        this->CaculateCircuit();
    } while (this->Check() == 0);
}

void Circle::Print()
{
    cout << "Hinh tron: ";
    Shape::Print();
}
void Circle::CaculateArea()
{
    vector<double> l = GetLength();
    SetAreaValue(3.1416 * l[0] * l[0]);
}
void Circle::CaculateCircuit()
{
    vector<double> l = GetLength();
    SetCircuitValue(l[0] * 2 * 3.14);
}

Shape* Circle::CreateObject() {
    Shape* Object = new Circle;
    return Object;
}