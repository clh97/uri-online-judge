#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;

int main() {  
  double salary, newSalary, readjustmentRate, readjustmentValue;
  cin >> salary;

  if(salary >= 0 && salary <= 400.0) {
    readjustmentRate = 15;
  } else if (salary >= 400.01 && salary <= 800.0) {
    readjustmentRate = 12;
  } else if (salary >= 800.01 && salary <= 1200.0) {
    readjustmentRate = 10;
  } else if (salary >= 1200.01 && salary <= 2000.0) {
    readjustmentRate = 7;
  } else if (salary > 2000.0) {
    readjustmentRate = 4;
  }

  readjustmentValue = salary * (readjustmentRate / 100);
  newSalary = salary + readjustmentValue;

  cout << fixed << setprecision(2);

  cout << "Novo salario: " << newSalary << endl;
  cout << "Reajuste ganho: " << readjustmentValue << endl;
  cout << "Em percentual: " << (int)readjustmentRate << " %" << endl;

  return 0;
}
