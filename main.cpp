#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int id, workHours;
  float hourSalary, monthSalary;

  cin >> id;
  cin >> workHours;
  cin >> hourSalary;
  
  monthSalary = hourSalary * workHours;

  cout << fixed;
  cout << setprecision(2);

  cout << "NUMBER = " << id << endl;
  cout << "SALARY = U$ " << monthSalary << endl;

  return 0;
}