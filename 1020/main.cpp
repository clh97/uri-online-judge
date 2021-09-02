#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main()
{
  int inputDays = 0;
  cin >> inputDays;

  int years = 0, months = 0, days = 0;

  years = inputDays / 365;
  months = (inputDays - (years * 365)) / 30;
  days = (inputDays - (years * 365) - (months * 30));

  cout << years << " ano(s)" << endl;
  cout << months << " mes(es)" << endl;
  cout << days << " dia(s)" << endl;
}