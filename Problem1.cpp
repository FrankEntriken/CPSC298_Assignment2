/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 1
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  //initialize array as all negative to help indexing as last step
  int numberArray [10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
  string temp;

  cout << "Input up to ten nonnegative integers" << endl;
  cout << "If you want to stop entering integers, type 'stop'" << endl;;

  int counter = 0;
  while(true)
  {
    cin >> temp;

    // if user wants to stop entering integers
    if (temp == "stop")
    {
      break;
    }

    // if string can not convert to int
    try
    {
      stoi(temp);
    }

    catch (const invalid_argument& invalid)
    {
        cout << "Please enter a valid integer" << endl;
        continue;
    }

    // if ten integers has been reached
    if (counter > 9)
    {
      break;
    }

    // if integer is negative
    else if (stoi(temp) < 0)
    {
      cout << "Please enter a nonnegative integer" << endl;
    }

    // add integer to numberArray
    else
    {
      numberArray[counter] = stoi(temp);
      counter++;
    }
  }

  //print user inputted numbers from array
  for (int i = 0; i < 10; i++)
  {
    if (numberArray[i] < 0)
    {
      break;
    }
    else
    {
      cout << numberArray[i] << endl;
    }
  }
}
