#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x = 0;
  float y = 0.0f;

  cin >> x;
  cin >> y;

  cout << fixed << setprecision(3) << x / y << " km/l" << endl;
}