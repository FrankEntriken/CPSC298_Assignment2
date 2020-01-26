/*
Frank Entriken
2298368
entriken@chapman.edu
CPSC 298
Problem 4
*/

#include <iostream>
#include <string>
using namespace std;

double addTax(float taxRate, float cost)
{
  cost = cost + (cost * taxRate);
  return cost;
}

int main()
{
  float tax;
  float cost;
  float totalCost;

  cout << "What is the cost of the item?...";
  cin >> cost;

  cout << "What is the sales tax on the item?...";
  cin >> tax;
  tax = tax * 0.01; //change to percent

  totalCost = addTax(tax, cost);
  cout << "Total Cost: $" << totalCost << endl;
}
