#include <iostream>
#include "Business.h"
#include <limits>
#include <string>
using namespace std;

//constructor and destructor
Business::Business()
{
}
Business::Business(const Business &bussiness)
{
    SetCostService(bussiness.GetCostService()).SetID(bussiness.GetIdRoom()).SetNightsUse(bussiness.GetNightsUse());
}

Business::~Business()
{
}
//Setter
void Business::SetAll()
{
    cout << "Enter ID room: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string id;
    getline(cin, id);
    cout << "Enter number of nights used: ";
    int night;
    cin >> night;
    SetID(id).SetNightsUse(night);
    SetRevenue();
}
void Business::SetRevenue()
{
    Room::UpdateRevenue(GetNightsUse() * 300000);
}
Room *Business::CreateNewObject()
{
    Room *newObject = new Business;
    return newObject;
}