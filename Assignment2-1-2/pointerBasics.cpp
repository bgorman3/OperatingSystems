/*
Brendan Gorman
*/

#include <iostream>
using namespace std;

int main()
{
  // Part A
  int myInt = 15;
  int* myPointer= &myInt;
  // Part B
  cout << "Memory address of myInt: " << &myInt << "\n";
  cout << "Value contained in myPointer: " << myPointer << "\n";
   cout << "Value of myInt: " << myInt << "\n";
   cout << "Value pointed to by myPointer: " << *myPointer << "\n";
 // Part C
 myInt = 10;
 cout << "Memory address of myInt: " << &myInt << "\n";
 cout << "Value contained in myPointer: " << myPointer << "\n";
  cout << "Value of myInt: " << myInt << "\n";
 cout << "Value pointed to by myPointer: " << *myPointer << "\n";

}
