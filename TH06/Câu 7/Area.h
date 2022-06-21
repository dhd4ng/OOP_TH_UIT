#pragma once
#include"Rectangle.h"
#include"Triangle.h"
#include"Circle.h"
#include<vector>
using namespace std;

class Area
{
private:
    vector<Shape*> arrShape;
    vector<Shape*> TemplateShape;
public:
    Area();
    ~Area();

    void InputShapes();
    void PrintAllShape();
};
