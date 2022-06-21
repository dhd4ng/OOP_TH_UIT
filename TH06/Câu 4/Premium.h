#pragma once
#include"Room.h"
class Premium:public Room
{
public:
    //constructor and destructor
    Premium();
    Premium(const Premium &premium);
    Premium(std::string id, double cost, int night) : Room(id, cost, night)
    {
    }
    ~Premium();
    //Settter
    virtual void SetRevenue();
    Room *CreateNewObject();
    std::string NameRoom() { return "preminum room"; }
    void SetAll();
};