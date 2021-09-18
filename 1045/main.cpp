#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c, tmp;

  cin >> a;
  cin >> b;
  cin >> c;

  if (a < b){
    tmp = a;
    a = b;
    b = tmp;
  } 

  if (b < c){
    tmp = b;
    b = c;
    c = tmp;
  }

  if (a < b){
    tmp = a;
    a = b;
    b = tmp;
  }

  if (a >= b + c) {
    cout << "NAO FORMA TRIANGULO" << endl;
  } else if((a * a) == (b * b) + (c * c)) {
    cout << "TRIANGULO RETANGULO" << endl;
  } else if((a * a) > (b * b) + (c * c)) {
    cout << "TRIANGULO OBTUSANGULO" << endl;
  } else if((a * a) < (b * b) + (c * c)) {
    cout << "TRIANGULO ACUTANGULO" << endl;
  }

  if(a == b && b == c) {
    cout << "TRIANGULO EQUILATERO" << endl;
  } else if ((a == b) || (b == c)) {
    cout << "TRIANGULO ISOSCELES" << endl;
  } 

  return 0;
}