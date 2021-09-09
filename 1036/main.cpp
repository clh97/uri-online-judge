#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main() {
  double a = 0.0f, b = 0.0f, c = 0.0f;

  cin >> a;
  cin >> b;
  cin >> c;

  double delta_input = pow(b, 2) - 4 * a * c;
  double delta = sqrt(delta_input);

  if (a <= 0.0 || isnan(delta)) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }

  double x1 = (-b + delta) / (2 * a);
  double x2 = (-b - delta) / (2 * a);

  cout << fixed << setprecision(5);

  cout << "R1 = " << x1 << endl;
  cout << "R2 = " << x2 << endl;
}