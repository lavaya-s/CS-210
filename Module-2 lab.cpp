#include <iostream>
#include <string>
using namespace std;

int main() {
   //declare variables for input
   string noun;
   int num;
   //take input for the first iteration
   cin >> noun;
   cin >> num;
   //while loop continues to run until the user enters quit
   while (noun!="quit"){
      //print the sentence to the screen using the previous input
      cout << "Eating " << num << " " << noun << " a day keeps you happy and healthy." << endl;
      //take input from the user
      cin >> noun;
      cin >> num;
      }

   return 0;
}
