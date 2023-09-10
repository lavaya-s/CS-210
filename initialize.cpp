#include<iostream>
using namespace std;
#include<iomanip>
#include"Menu.cpp"
class init {
public:
	void initialize(int clock12hour,
		int clock12minute,
		int clock12second,
		int clock24hour,
		int clock24minute,
		int clock24second,
		int cycle,
		bool flag) {
		cout << " 0  Please enter the hour\r ";//placeholder zero for input
		cin >> clock12hour;//take input for time
		cout << " 0  Please enter the minute\r ";
		cin >> clock12minute;
		clock24minute = clock12minute;//times should match
		cout << " 0  Please enter the second\r ";
		cin >> clock12second;
		clock24second = clock12second;
		cout << "[1]-AM or [2]-PM?" << endl;
		cin >> cycle;//ake input for AM/PM
		//conditional blocks to set the 24-hour clock based on AM/PM
		if (cycle == 2) {//conditional check to see if it is AM or PM
			clock24hour = (clock12hour + 12) % 24;
			//set 24-hour clock ahead by 12 but modulo 24 to not set it ahead too far
		}
		else {
			clock24hour = clock12hour;
		}
		flag = true;
		Menu().menu(clock12hour, clock12minute, clock12second, clock24hour, clock24minute, clock24second, cycle, flag);
	}
};