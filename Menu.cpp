#include"Display.cpp"
class Menu {
public:
	void menu(int clock12hour,
		int clock12minute,
		int clock12second,
		int clock24hour,
		int clock24minute,
		int clock24second,
		int cycle,
		bool flag) {
		while (flag = true) {//keep looping until false
			int option = 0;//variale to pick options defaults to zero
			cout << "Please choose an option:\n\t[0}-Display time\n\t[1]-add an Hour";
			cout << "\n\t[2]-add a Minute\n\t";//display options
			cout << "[3]-add a second\n\t[4]-exit program" << endl;
			if (option == 0) {//conditional to force program to halt and take input
				cin >> option;//take option input from user
			}
			//conditional block for options
			if (option == 1) {
				clock12hour++; clock24hour++;//increment hours
			}
			else if (option == 2) {
				clock12minute++; clock24minute++;//increment minutes
			}
			else if (option == 3) {
				clock24second++; clock12second++;//increment seconds
			}
			else if (option == 4) {
				flag = false;//set flag to false for while loop
				break;//break out of while loop
			}
			else {//if the user enters something random
				cout << "Please Enter A Selection [1-4]" << endl;
			}
			if (clock12second == 60) {//conditional to check if 60 seconds have passed
				clock12second = 0;//reset to zero
				clock12minute++; clock24minute++;//increment minutes
			}
			if (clock12minute == 60) {//conditional to check if 60 minutes have passed
				clock12minute = 0;//reset to zero
				clock12hour++; clock24hour++;//increment hours
			}
			//ternary statement to stop clock from going past 12:59:59 and resetting to 1
			clock12hour = clock12hour >= 13 ? clock12hour = 1 : clock12hour % 13;
			clock24hour = clock24hour % 24;//stop the clock from going past 23:59:59
			if (cycle % 2 == 0 && clock12hour >= 12) {//conditional to check if PM and going past 12:59
				cycle--;//decrement cycle to AM
			}
			else if (cycle % 2 == 1 && clock12hour >= 12) {//conditional to check if AM and going past 12:59
				cycle++;//increment cycle to PM
			}
			clock24minute = clock12minute;//set minutes and seconds to synchrponize
			clock24second = clock12second;
			Display().display(clock12hour,clock12minute,clock12second,clock24hour,clock24minute,clock24second,cycle,flag);
		}
	}
};