#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main()
{
  int inputSeconds = 0;
  cin >> inputSeconds;

  int hours = 0, minutes = 0, seconds = 0;

  hours = inputSeconds / 60 / 60;
  minutes = (inputSeconds - (hours * 60 * 60)) / 60;
  seconds = inputSeconds % 60;

  cout << hours << ":" << minutes << ":" << seconds << endl;
}