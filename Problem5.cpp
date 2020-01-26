/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 5
*/

#include <iostream>
#include <string>
using namespace std;

void takeLength(int& feet, int& inches)
{
  cout << "You will enter the length in feet and inches." << endl;
  cout << "What is the length in feet?...";
  cin >> feet;

  cout << "How many inches are left over?...";
  cin >> inches;
}

void calculate(int feet, int inches, int& meters, double& centimeters)
{
  inches = (feet * 12) + inches;              //convert length to just inches
  centimeters = inches * 2.54;                //inches to centimeters
  meters = centimeters / 100;                 //find meters from centimeters
  centimeters = centimeters - (meters * 100); //subtract meters from centimeters
}

void output(int feet, int inches, int meters, double centimeters)
{
  cout << feet << "ft and " << inches << "in converts to " << meters << "m and " << centimeters << "cm." << endl;
}

int main()
{
  int feet;
  int inches;
  int meters;
  double centimeters;

  //loop so user can continue inputting
  while(true)
  {
    feet = 0;
    inches = 0;
    meters = 0;
    centimeters = 0;


    takeLength(feet, inches);
    calculate(feet, inches, meters, centimeters);
    output(feet, inches, meters, centimeters);


    cout << "If you would like to exit the program enter 'stop'. If you want to continue enter any other input." << endl;
    cin >> userInput;

  }
}
