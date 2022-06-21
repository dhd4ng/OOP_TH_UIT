#include <iostream>
#include "Room.h"
#include <string>
using namespace std;
//constructor and destructor
Room::Room()
{
    SetCostService(0).SetID("").SetNightsUse(0);
}
Room::Room(std::string id, double cost, int night)
{
    SetCostService(cost).SetID(id).SetNightsUse(night);
}
Room::Room(const Room &room)
{
    SetCostService(room.CostService).SetID(room.IdRoom).SetNightsUse(room.NightsUse);
}
Room::~Room()
{
}
//getter and setter
Room &Room::SetID(std::string id)
{
    IdRoom = id;
    return *this;
}
Room &Room::SetCostService(double cost)
{
    CostService = cost;
    return *this;
}
Room &Room::SetNightsUse(int night)
{
    NightsUse = night;
    return *this;
}
//other methods
void Room::Print()
{
    cout << GetIdRoom() << " - kind: " << NameRoom() << " - Revenue: " << (long long)GetRevenue() << endl;
}