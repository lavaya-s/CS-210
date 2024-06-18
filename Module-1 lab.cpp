#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
//initialize the variables
   double cost;
   double miles;
//take input from the user
   cin >> miles;
   cin >> cost;
//set precision
   cout << fixed << setprecision(2);
//calculate the cost per mile
   double total = cost/miles;
//output the required amounts
   cout << total*20 << " ";
   cout << total*75 << " ";
   cout << total*500 << endl;
   return 0;
}
