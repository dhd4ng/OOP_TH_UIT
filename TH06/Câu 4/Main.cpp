#include "Sofitel.h"
#include <iostream>
using namespace std;
int main()
{
    Sofitel hotel;
    int CatchKey;
    cout << "Program sofitel\n";
    do
    {
        cout << "__________Menu__________\n";
        cout << "   Press 1 to input room from file.\n";
        cout << "   Press 2 to input room from keyboard.\n";
        cout << "   Press 3 to Print sum Revenue of kind room.\n";
        cout << "   Press 4 to Print information of each room.\n";
        cout << "   Press 5 to Show rooms has advance revenue.\n";
        cout << "   Press 6 to exit.\n";
        cout << "Press: ";
        while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4 && CatchKey != 5 && CatchKey != 6)
        {
            cout << "Just press 1,2,3,4,5 or 6. Again: ";
        }
        switch (CatchKey)
        {
        case 1:
            hotel.InputRoomsFromFile();
            break;
        case 2:
            hotel.InputFromKeBoard();
            break;
        case 3:
            hotel.PrintRevenue();
            break;
        case 4:
            hotel.PrintAllRoom();
            break;
        case 5:
            hotel.ShowRoomAdvanceRevenue();
            break;
        default:
            break;
        }
    } while (CatchKey != 6);
    cout << "Thanks!";
    return 0;
}