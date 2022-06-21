#pragma once
#include "Room.h"
#include <string>
class Deluxe : public Room
{
private:
    double CostServer;

public:
    //constructor and destructor
    Deluxe();
    Deluxe(std::string id, double cost, double costserver, int night) : Room(id, cost, night)
    {
        SetCostServer(costserver);
        SetRevenue();
    }
    Deluxe(const Deluxe &deluxe);
    ~Deluxe();
    void SetAll();
    //setter
    Deluxe &SetCostServer(double costserver) { CostServer = costserver; }
    double GetCostServer() const { return CostServer; }
    void SetRevenue();
    Room *CreateNewObject();
    std::string NameRoom() { return "deluxe room"; }
};
