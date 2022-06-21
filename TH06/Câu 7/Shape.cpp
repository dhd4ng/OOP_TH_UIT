#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape()
{
    vector<double> l;
    l.resize(0);
    SetNumEdge(0).SetLength(l);
}
Shape::Shape(int num)
{
    vector<double> l;
    l.resize(num);
    SetNumEdge(num).SetLength(l);
}
Shape::~Shape()
{
}

Shape& Shape::SetAreaValue(double area)
{
    AreaValue = area;
    return *this;
}
Shape& Shape::SetNumEdge(int numedge)
{
    NumEdge = numedge;
    return *this;
}
Shape& Shape::SetLength(vector<double> length)
{
    Length = length;
    return *this;
}
Shape& Shape::SetCircuitValue(double circuitvalue)
{
    CircuitValue = circuitvalue;
    return *this;
}
void Shape::CaculateCircuit()
{
    double circuit = 0;
    vector<double> l = GetLength();
    for (int i = 0; i < GetNumEdge(); i++)
    {
        circuit += l[i];
    }
    SetCircuitValue(circuit);
}
void Shape::Set()
{
    do
    {
        vector<double> l;
        l.resize(GetNumEdge());
        for (int i = 0; i < GetNumEdge(); i++)
        {
            cout << "Nhap chieu dai canh " << i + 1 << " : ";
            cin >> l[i];
        }
        SetLength(l);
        this->CaculateArea();
        this->CaculateCircuit();
    } while (this->Check() == 0);
}
void Shape::Print()
{
    cout << "( ";
    for (int i = 0; i < GetNumEdge(); i++)
    {
        cout << Length[i];
        if (i != GetNumEdge() - 1)
        {
            cout << " , ";
        }
    }
    cout << ") S = " << GetAreaValue() << " and C = " << GetCircuitValue();
}
bool Shape::Check()
{
    vector<double> l;
    l = GetLength();
    for (int i = 0; i < GetNumEdge(); i++)
    {
        if (l[i] == 0)
        {
            cout << "Nhap lai.\n";
            return false;
        }
    }
    return true;
}