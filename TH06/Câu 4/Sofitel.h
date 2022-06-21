#pragma once

#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include <vector>
class Sofitel
{
private:
    std::vector<Room *> arrRoom;
    int numDeluxeRoom;
    int numPremiumRoom;
    int numBusinessRoom;
    double SumRevenueDeluxe;
    double SumRevenuePremium;
    double SumRevenueBusiness;

public:
    Sofitel();
    ~Sofitel();

    //Setter
    Sofitel &SetSumRevenueDeluxe(double deluxe) { SumRevenueDeluxe = deluxe; }
    Sofitel &SetSumRevenuePremium(double premium) { SumRevenuePremium = premium; }
    Sofitel &SetSumRevenueBuiness(double business) { SumRevenueBusiness = business; }
    Sofitel &SetnumDeluxeRoom(int numdeluxe) { numDeluxeRoom = numdeluxe; }
    Sofitel &SetnumPremiumRoom(int numpremium) { numPremiumRoom = numpremium; }
    Sofitel &SetnumBusinessRoom(int numbusiness) { numBusinessRoom = numbusiness; }
    //Getter
    double
    GetSumRevenueDeluxe() const
    {
        return SumRevenueDeluxe;
    }
    double GetSumRevenuePremium() const { return SumRevenuePremium; }
    double GetSumRevenueBusiness() const { return SumRevenueBusiness; }
    int GetnumDeluxeRoom() const { return numDeluxeRoom; }
    int GetnumPremiumRoom() const { return numPremiumRoom; }
    int GetnumBusinessRoom() const { return numBusinessRoom; }
    vector<Room *> GetArr() { return arrRoom; }
    //other methods
    void PrintRevenue();
    void InputRoomsFromFile();
    void InputFromKeBoard();
    void ShowRoomAdvanceRevenue();
    void PrintAllRoom();
};
/*
2
2
deluxe01
60000
40000
6
deluxe02
50000
20000
5
3
premium01
70000
7
premium02
100000
4
premium03
200000
5
4
business01
8
business02
5
business03
10
business04
20
*/