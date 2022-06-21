#include <iostream>
#include <limits>
#include "Premium.h"
using namespace std;

//constructor and destructor
Premium::Premium()
{
}
Premium::Premium(const Premium &premium)
{
    SetCostService(premium.GetCostService()).SetID(premium.GetIdRoom()).SetNightsUse(premium.GetNightsUse());
}
Premium ::~Premium()
{
}
//Settter
void Premium::SetRevenue()
{
    Room::UpdateRevenue((GetNightsUse() * 500000 + GetCostService()) * 1.05);
}
Room *Premium::CreateNewObject()
{
    Room *newObject = new Premium;
    return newObject;
}
void Premium::SetAll()
{
    cout << "Enter Id room: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::string id;
    getline(cin, id);
    cout << "Enter cost services: ";
    double cost;
    cin >> cost;
    cout << "Enter number of nights used: ";
    int night;
    cin >> night;
    SetCostService(cost).SetID(id).SetNightsUse(night);
    SetRevenue();
}