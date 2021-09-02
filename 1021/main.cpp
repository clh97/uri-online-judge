#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main()
{
  double money = 0;
  array<double, 6> cells = {100, 50, 20, 10, 5, 2};
  array<int, 6> coins = {100, 50, 25, 10, 5, 1};

  cin >> money;

  cout << "NOTAS:" << endl;

  for(double i : cells) {
    int quantity = money / i;
    money -= quantity * i;
    cout << quantity << fixed << setprecision(2) << " nota(s) de R$ " << i << endl;
  }

  cout << "MOEDAS:" << endl;

  for(int i : coins) {
    int quantity = (money * 100) / i;
    money -= double(quantity * i) / 100;
    cout << quantity << fixed << setprecision(2) << " moeda(s) de R$ " << double(i) / 100 << endl;
  }
}