#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;

  cin >> a;
  cin >> b;

  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  if (a % b != 0) {
    cout << "Nao sao Multiplos" << endl;
  } else {
    cout << "Sao Multiplos" << endl;
  }

  return 0;
}