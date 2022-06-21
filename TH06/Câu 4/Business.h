#pragma once
#include<iostream>
#include"Room.h"
using namespace std;
class Business: public Room
{
public:
    //constructor and destructor
    Business();
    Business(const Business &bussiness);
    Business(std::string id, double cost, int night) : Room(id, cost, night)
    {
    }
    ~Business();
    //Setter
    void SetAll();
    virtual void SetRevenue();
    Room *CreateNewObject();
    std::string NameRoom() { return "business room"; }
};
