#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

template <class charT, charT sep>
class punct_facet: public std::numpunct<charT> {
protected:
    charT do_decimal_point() const { return sep; }
};

int main()
{
  int money = 0;
  array<float, 7> cells = {100, 50, 20, 10, 5, 2, 1};

  cin >> money;

  cout.imbue(locale(cout.getloc(), new punct_facet<char, ','>));

  for(float i : cells) {
    int quantity = money / i;
    money -= quantity * i;
    cout << quantity << fixed << setprecision(2) << " nota(s) de R$ " << i << endl;
  }
}