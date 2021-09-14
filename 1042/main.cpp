#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c;

  cin >> a;
  cin >> b;
  cin >> c;

  int arr[3] = { a, b, c }, originalArr[3] = { a, b, c };

  int arrSize = sizeof(arr) / sizeof(arr[0]);

  std::sort(arr, arr + arrSize);

  for (int i = 0; i < arrSize; i++)
    cout << arr[i] << endl;

  cout << endl;

  for (int i = 0; i < arrSize; i++)
    cout << originalArr[i] << endl;
  
  return 0;
}