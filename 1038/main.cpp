#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

struct ItemType {
  int code;
  string spec;
  int price;
};

const ItemType items[5] = {
  {code : 1, spec : "Cachorro Quente", price : 400},
  {code : 2, spec : "X-Salada", price : 450},
  {code : 3, spec : "X-Bacon", price : 500},
  {code : 4, spec : "Torrada simples", price : 200},
  {code : 5, spec : "Refrigerante", price : 150}
};

int main() {
  int a = 0, b = 0;

  cin >> a;
  cin >> b;

  int total = 0;

  for (auto item : items) {
    if (a > 0) {
      if (item.code == a) {
        total += b * item.price;
      }
    }
  }

  cout << fixed << setprecision(2);
  cout << "Total: R$ " << float(total) / 100 << endl;

  return 0;
}