#pragma once
#include <string>
#include <iostream>
using namespace std;
class Room
{
private:
    double CostService;
    std::string IdRoom;
    int NightsUse;
    double Revenue;

public:
    //constructor and destructor
    Room();
    Room(std::string id, double cost, int night);
    Room(const Room &room);
    ~Room();
    //getter and setter
    Room &SetID(std::string id);
    Room &SetCostService(double cost);
    Room &SetNightsUse(int night);
    virtual void SetRevenue() = 0;
    virtual void UpdateRevenue(double revenue) { Revenue = revenue; }
    virtual void SetAll() = 0;
    double GetCostService() const { return CostService; }
    int GetNightsUse() const { return NightsUse; }
    double GetRevenue() const { return Revenue; }
    std::string GetIdRoom() const
    {
        return IdRoom;
    }
    //other methods
    void Print();
    virtual Room *CreateNewObject() = 0;
    virtual std::string NameRoom() = 0;
};
