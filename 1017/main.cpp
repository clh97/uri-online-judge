#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float hours = 0, avgSpeed = 0;
  const int litersPerHour = 12;

  cin >> hours;
  cin >> avgSpeed;

  float result = (hours * avgSpeed) / litersPerHour;

  cout << fixed << setprecision(3) << result << endl;
}