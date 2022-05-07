#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main() {
	ThoiGian A;
	A.setTime(1, 30, 50);
	cout << "Time: " << A.getHour() << ":" << A.getMinute() << ":" << A.getSecond() << endl;
	A.setHour(2);
	cout << "Time: " << A.getHour() << ":" << A.getMinute() << ":" << A.getSecond() << endl;

	return 0;
}