#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;

int main() {

  const double PI = 3.14159;
  double i1, i2, i3;
  double tri, cir, tra, squa, rect;

  string input;
  getline(cin, input);

  stringstream ss(input);

  ss >> i1;
  ss >> i2;
  ss >> i3;

  tri = (i1 * i3) / 2;
  cir = (i3 * i3) * PI;
  tra = ((i1 + i2) / 2) * i3;
  squa = i2 * i2;
  rect = i1 * i2;

  cout << fixed;
  cout << setprecision(3);

  cout << "TRIANGULO: " << tri << endl;
  cout << "CIRCULO: " << cir << endl;
  cout << "TRAPEZIO: " << tra << endl;
  cout << "QUADRADO: " << squa << endl;
  cout << "RETANGULO: " << rect << endl;

  return 0;
}