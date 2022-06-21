#include"Shape.h"

class Triangle final : public Shape
{
private:
    const int Edge = 3;

public:

    Triangle();
    ~Triangle();

    void Print();
    bool Check();
    void CaculateArea();
    Shape* CreateObject();
    string NameShape() { return "hinh tam giac"; }
};