#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  /**
   * Escreva a sua solução aqui
   * Code your solution here
   * Escriba su solución aquí
   */

  float A, B, MEDIA;
  float w1, w2;

  w1 = 3.5;
  w2 = 7.5;

  cin >> A;
  cin >> B;

  cout << fixed;
  cout << setprecision(5);

  MEDIA = ((A * w1) + (B * w2)) / (w1 + w2);

  cout << "MEDIA = " << MEDIA << endl;
  return 0;
}