#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    double raio, area, pi;
    
    pi = 3.14159;
    
    cin >> raio;
    
    area = pi * (raio * raio);
    
    cout << fixed;
    cout << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
