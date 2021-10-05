#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int initialHour, initialMinute, finalHour, finalMinute;
  int resultHours, resultMinutes;

  cin >> initialHour;
  cin >> initialMinute;
  cin >> finalHour;
  cin >> finalMinute;

  if (initialHour > finalHour) {
    resultHours = 24 - (initialHour - finalHour);
  } else if (finalHour > initialHour) {
    resultHours = finalHour - initialHour;
  } else if (initialHour == finalHour) {
    resultHours = 24;
  }

  if ((finalMinute - initialMinute) < 0) {
    resultMinutes = 60 + (finalMinute - initialMinute);
    resultHours--;
  } else if (finalMinute > initialMinute) {
    resultMinutes = finalMinute - initialMinute;
  }

  if (initialHour == finalHour) {
    resultHours = 24;
  }

  if (initialMinute == finalMinute) {
    resultMinutes = 0;
  }

  cout << "O JOGO DUROU " << resultHours << " HORA(S) " << "E " << resultMinutes << " MINUTO(S)" << endl;

  return 0;
}