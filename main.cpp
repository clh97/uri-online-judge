#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  int a, b, c;

  string input;
  getline(cin, input);

  stringstream ss(input);

  ss >> a;
  ss >> b;
  ss >> c;

  int maior;

  int maiorab = (a+b+abs(a-b))/2;

  if (c > maiorab) {
    maior = c;
  } else {
    maior = maiorab;
  }

  cout << maior << " eh o maior" << endl;
  return 0;
}
