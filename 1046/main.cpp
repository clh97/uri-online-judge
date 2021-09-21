#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int start, finish, result;

  cin >> start;
  cin >> finish;

  if (start > finish) {
    result = 24 - (start - finish);
  } else if (finish > start) {
    result = finish - start;
  } else {
    result = 24;
  }

  cout << "O JOGO DUROU " << result << " HORA(S)" << endl;

  return 0;
}