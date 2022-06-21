#include<iostream>
#include"Triangle.h"
#include<cmath>
using namespace std;


Triangle::Triangle()
{
    SetNumEdge(Edge);
}
Triangle::~Triangle()
{
}

void Triangle::Print()
{
    cout << "Hinh tam giac: ";
    Shape::Print();
}
bool Triangle::Check()
{
    vector<double> l = GetLength();
    if (l[0] + l[1] <= l[2] || l[0] + l[2] <= l[1] || l[1] + l[2] <= l[0])
    {
        cout << "Nhap lai.\n";
        return false;
    }
    return true;
}
void Triangle::CaculateArea()
{
    vector<double> l = GetLength();
    double p = (l[0] + l[1] + l[2]) / 2;
    SetAreaValue(sqrt(p * (p - l[0]) * (p - l[1]) * (p - l[2])));
}

Shape* Triangle::CreateObject() {
    Shape* Object = new Triangle;
    return Object;
}