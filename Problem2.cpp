/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 2
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a[4][5];
  int number;

  int row, col;
  cout << "Enter a row of 5 integers with spaces in between to fill the first row of the array" << endl;
  for (row = 0; row < 4; row++)
  {
    for(col = 0; col < 5; col++)
    {
      cin >> a[row][col];
    }
  }

  cout << endl;
  cout << "Here is your array" << endl;
  for (row = 0; row < 4; row++)
  {
    for(col = 0; col < 5; col++)
    {
      cout << a[row][col] << " ";
    }
    cout << endl;
  }



}
