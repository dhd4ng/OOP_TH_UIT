#include "Deluxe.h"
#include "Deluxe.h"
#include "Deluxe.h"
#include <iostream>
#include "Deluxe.h"
#include <limits>
//constructor and destructor
Deluxe::Deluxe()
{
    SetCostServer(0);
}
//Deluxe::Deluxe(std::string id, double cost, int night) : Room(id, cost, night){
//}
Deluxe::Deluxe(const Deluxe &deluxe)
{
    SetCostServer(deluxe.GetCostServer()).SetCostService(deluxe.GetCostService()).SetID(deluxe.GetIdRoom()).SetNightsUse(deluxe.GetNightsUse());
}

//setter
void Deluxe::SetRevenue()
{
    Room::UpdateRevenue(GetNightsUse() * 750000 + GetCostService() + GetCostServer());
}
Room *Deluxe::CreateNewObject()
{
    Room *newObject = new Deluxe;
    return newObject;
}
void Deluxe::SetAll()
{
    cout << "Enter Id room: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::string id;
    getline(cin, id);
    cout << "Enter cost services: ";
    double cost;
    cin >> cost;
    double costserver;
    cout << "Enter cost server: ";
    cin >> costserver;
    cout << "Enter number of nights used: ";
    int night;
    cin >> night;
    SetCostServer(costserver).SetCostService(cost).SetID(id).SetNightsUse(night);
    SetRevenue();
}