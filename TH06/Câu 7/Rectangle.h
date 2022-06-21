#pragma once
#include"Shape.h"
class Rectangle final : public Shape
{
private:
    const int Edge = 2;

public:
    Rectangle();
    ~Rectangle();

    void Set();

    void Print();
    void CaculateArea();
    void CaculateCircuit();
    Shape* CreateObject();
    string NameShape() { return "hinh chu nhat"; }
};