#pragma once
#include<vector>
#include<string>
using namespace std;
class Shape
{
protected:
    double AreaValue;
    double CircuitValue;
    int NumEdge;
    vector<double> Length;

public:

    Shape();
    Shape(int num);
    virtual ~Shape();

    double GetAreaValue() const { return AreaValue; }
    int GetNumEdge() const { return NumEdge; }
    vector<double> GetLength()const { return Length; }

    Shape& SetAreaValue(double Shapevalue);
    Shape& SetCircuitValue(double circuitvalue);
    Shape& SetNumEdge(int numedge);
    Shape& SetLength(vector<double> length);
    double GetCircuitValue() { return CircuitValue; }
    virtual void Set();

    virtual void Print();
    virtual bool Check();
    virtual string NameShape() = 0;
    virtual Shape* CreateObject() = 0;
    virtual void CaculateArea() = 0;
    virtual void CaculateCircuit();
};