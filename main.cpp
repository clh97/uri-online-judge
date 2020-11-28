#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  string name;
  double salary, sales, salaryWithBonus;

  cin >> name;
  cin >> salary;
  cin >> sales;

  salaryWithBonus = salary + (sales * .15);

  cout << fixed;
  cout << setprecision(2);

  cout << "TOTAL = R$ " << salaryWithBonus << endl;

  return 0;
}