#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main() {
  int a = 0, b = 0, c = 0, d = 0;

  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  if ((b > c && d > a) && (c + d) > (a + b) && (c > 0) && (d > 0)) {
    cout << "Valores aceitos" << endl;
  } else {
    cout << "Valores nao aceitos" << endl;
  }
}