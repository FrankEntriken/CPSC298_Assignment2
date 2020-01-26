/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 3
*/

#include <iostream>
#include <string>
using namespace std;

void zeroBoth(int& one, int& two)
{
  one = 0;
  two = 0;
}

int main()
{
  int ten = 10;
  int six = 6;
  cout << "Before zeroBoth: " << endl;
  cout << ten << endl;
  cout << six << endl;

  zeroBoth(ten, six);

  cout << endl;
  cout << "After zeroBoth: " << endl;
  cout << ten << endl;
  cout << six << endl;
}
