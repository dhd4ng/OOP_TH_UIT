#include"Shape.h"

class Circle : public Shape
{
private:
    const int Edge = 1;

public:

    Circle();
    ~Circle();

    void Set();

    void Print();
    void CaculateCircuit();
    void CaculateArea();

    Shape* CreateObject();
    string NameShape() { return "hinh tron"; }
};