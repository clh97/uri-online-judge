#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c;

  cin >> a;
  cin >> b;
  cin >> c;

  cout << fixed << setprecision(1);

  if (a < b + c && b < a + c && c < a + b) {
    cout << "Perimetro = " <<  a + b + c << endl;
  } else {
    cout << "Area = " << c * (a + b) / 2 << endl;
  }

  return 0;
}