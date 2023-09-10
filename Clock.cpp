#include<iostream>
using namespace std;
#include<iomanip>
#include"initialize.cpp"
int main() {
	int clock12hour=0;//12-hour clock time
	int clock12minute=0;
	int clock12second=0;
	int clock24hour=0;//24-hour clock time
	int clock24minute=0;
	int clock24second=0;
	int cycle=0;//variable for AM/PM
	bool flag=true;//flag for while loop condition
	init().initialize(clock12hour, clock12minute, clock12second, clock24hour, clock24minute, clock24second, cycle, flag);
	return 0;//return statement for main()
}