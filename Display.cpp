#include<iostream>
using namespace std;
#include<iomanip>
class Display {
public:
	void display(int clock12hour,
		int clock12minute,
		int clock12second,
		int clock24hour,
		int clock24minute,
		int clock24second,
		int cycle,
		bool flag) {
		cout << "***************     ***************\n";
		cout << "*12-Hour clock*     *24-Hour clock*\n";
		//conditions to check of am or pm
		//set padding for time output to 00
		if (cycle == 1) {
			cout << setfill('0') << "* " << setw(2) << clock12hour << ":" << setw(2) << clock12minute;
			cout << ":" << setw(2) << clock12second << "AM  *     * ";
			cout << setw(2) << clock24hour << ":" << setw(2) << clock24minute << ":";
			cout << setw(2) << clock24second << "    *" << endl;
			//args to display clocks
		}
		if (cycle == 2) {
			cout << setfill('0') << "* " << setw(2) << clock12hour << ":" << setw(2) << clock12minute;
			cout << ":" << setw(2) << clock12second << "PM  *     * ";
			cout << setw(2) << clock24hour << ":" << setw(2) << clock24minute << ":";
			cout << setw(2) << clock24second << "    *" << endl;
			//args to display clocks
		}
		cout << "***************     ***************\n";
	}
};