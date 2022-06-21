#include <iostream>
#include "Sofitel.h"
#include <fstream>
#include <limits>
using namespace std;
Sofitel::Sofitel()
{
    arrRoom.resize(0);
}
Sofitel::~Sofitel()
{
    for (int i = 0; i < arrRoom.size(); i++)
    {
        delete arrRoom[i];
    }
}
void Sofitel::InputRoomsFromFile()
{
    arrRoom.resize(0);
    string filename;
    cout << "Enter file name: ";
    cin >> filename;
    ifstream file;
    file.open(filename);
    if (!file.is_open())
    {
        cout << "Can't open file name.\n";
        return;
    }
    int d = 0, p = 0, b = 0;
    double sumDeluxe = 0, sumPreium = 0, sumBusiness = 0;
    file >> d >> p >> b;
    SetnumDeluxeRoom(d).SetnumPremiumRoom(p).SetnumBusinessRoom(b);
    for (int i = 0; i < d; i++)
    {
        std::string id;
        file.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(file, id);
        double cost;
        file >> cost;
        double costserver;
        file >> costserver;
        int night;
        file >> night;
        arrRoom.push_back(new Deluxe(id, cost, costserver, night));
        sumDeluxe += arrRoom.back()->GetRevenue();
    }
    for (int i = 0; i < p; i++)
    {
        arrRoom.push_back(new Premium);
        std::string id;
        file.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(file, id);
        double cost;
        file >> cost;
        int night;
        file >> night;
        arrRoom.back()->SetCostService(cost).SetID(id).SetNightsUse(night);
        arrRoom.back()->SetRevenue();
        sumPreium += arrRoom.back()->GetRevenue();
    }
    for (int i = 0; i < b; i++)
    {
        arrRoom.push_back(new Business);
        string id;
        file.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(file, id);
        int night;
        file >> night;
        arrRoom.back()->SetID(id).SetNightsUse(night);
        arrRoom.back()->SetRevenue();
        sumBusiness += arrRoom.back()->GetRevenue();
    }
    SetSumRevenueDeluxe(sumDeluxe).SetSumRevenuePremium(sumPreium).SetSumRevenueBuiness(sumBusiness);
}
void Sofitel::InputFromKeBoard()
{
    double sumDeluxe = 0, sumPreium = 0, sumBusiness = 0;
    int d, p, b;
    cout << "Input number of deluxe rooms: ";
    cin >> d;
    arrRoom.resize(0);
    for (int i = 0; i < d; i++)
    {
        cout << "Enter room " << i + 1 << " of deluxe:\n";
        arrRoom.push_back(new Deluxe);
        arrRoom.back()->SetAll();
        sumDeluxe += arrRoom.back()->GetRevenue();
    }
    cout << "Input number of premium rooms: ";
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cout << "Enter room " << i + 1 << " of premium:\n";
        arrRoom.push_back(new Premium);
        arrRoom.back()->SetAll();
        sumPreium += arrRoom.back()->GetRevenue();
    }
    cout << "Input number of business rooms: ";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cout << "Enter room " << i + 1 << " of business:\n";
        arrRoom.push_back(new Business);
        arrRoom.back()->SetAll();
        sumBusiness += arrRoom.back()->GetRevenue();
    }
    SetnumDeluxeRoom(d).SetnumPremiumRoom(p).SetnumBusinessRoom(b).SetSumRevenueDeluxe(sumDeluxe).SetSumRevenuePremium(sumPreium).SetSumRevenueBuiness(sumBusiness);
}
void Sofitel::PrintRevenue()
{
    cout << "Sum of revenue of deluxe rooms: " << (long long)GetSumRevenueDeluxe() << endl;
    cout << "Sum of revenue of premium rooms: " << (long long)GetSumRevenuePremium() << endl;
    cout << "Sum of revenue of business rooms: " << (long long)GetSumRevenueBusiness() << endl;
}
void Sofitel::PrintAllRoom()
{
    for (int i = 0; i < arrRoom.size(); i++)
    {
        arrRoom[i]->Print();
    }
}
void Sofitel::ShowRoomAdvanceRevenue()
{
    ofstream file;
    file.open("SOFITEL.OUT.txt");
    Sofitel LastRevenueMonth;
    cout << "Input revenue last month: \n";
    LastRevenueMonth.InputRoomsFromFile();
    vector<Room *> arr = LastRevenueMonth.GetArr();
    vector<Room *> arrAdvanceRoom;
    arrAdvanceRoom.resize(0);
    int n = (arr.size() <= arrRoom.size()) ? arr.size() : arrRoom.size();
    for (int i = 0; i < n; i++)
    {
        if (arrRoom[i]->GetRevenue() >= 1.25 * arr[i]->GetRevenue())
        {
            arrAdvanceRoom.push_back(arrRoom[i]);
        }
    }
    cout << arrAdvanceRoom.size() << " room advance revenue: \n";
    file << arrAdvanceRoom.size() << " room advance revenue: \n";
    for (int i = 0; i < arrAdvanceRoom.size(); i++)
    {
        cout << "Room: " << arrAdvanceRoom[i]->GetIdRoom() << endl;
        file << "Room: " << arrAdvanceRoom[i]->GetIdRoom() << endl;
    }
    file.close();
}