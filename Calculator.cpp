#include <iostream>
#include <cctype>//added new include statement
using namespace std;
//added semicolons and indents to multiple lines
int main()//changed to int instead of void
{
	char statement[100];
	int op1, op2;
	char operation = '+';//added a default value
	char answer = 'Y';//changed to char instead of string
	//added tolower to change to lowercase
		while (tolower(answer) != 'n'){//changed comparison operator to NOT 'n' to exit loop 
			cout << "Enter expression" << endl;
			cin >> op1;//seperated lines for clarity
			cin >> operation;
			cin >> op2;
			//Added brackets to all conditional statements
			if (operation == '+') {//changed to char instead of const char
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;//changed overloaded operator
			}
			if (operation == '-') {
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;//changed overloaded operator
			}
			if (operation == '*') {
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;//changed output to match equation
			}
			if (operation == '/') {
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;//changed output to match equation
			}
			cout << "Do you wish to evaluate another expression? " << endl;
			cin >> answer;
		}
		cout << "Program Finished.";
	return 0;//added return value
}

