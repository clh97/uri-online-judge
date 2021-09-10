#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main()
{
  float a = 0.0f;

  cin >> a;

  if (a < 0 || a > 100) {
    cout << "Fora de intervalo" << endl;
    return 0;
  }

  if (a <= 25) {
    cout << "Intervalo [0,25]" << endl;
  } else if (a <= 50) {
    cout << "Intervalo (25,50]" << endl;
  } else if (a <= 75) {
    cout << "Intervalo (50,75]" << endl;
  } else if (a <= 100) {
    cout << "Intervalo (75,100]" << endl;
  }
  return 0;
}