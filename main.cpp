#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  const double PI = 3.14159;
  double R, volume;

  cin >> R;

  cout << fixed;
  cout << setprecision(3);

  volume = (4.0/3.0) * PI * pow(R, 3);
  
  cout << "VOLUME = " << volume << endl;

  return 0;
}