#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  float A, B, C, MEDIA;
  float wa, wb, wc;

  wa = 2.0;
  wb = 3.0;
  wc = 5.0;

  cin >> A;
  cin >> B;
  cin >> C;

  cout << fixed;
  cout << setprecision(1);

  MEDIA = ((A * wa) + (B * wb) + (C * wc)) / (wa + wb + wc);

  cout << "MEDIA = " << MEDIA << endl;
  return 0;
}