#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float x1 = 0, x2 = 0, y1 = 0, y2 = 0;

  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  cout << fixed << setprecision(4) << distance << endl;
}