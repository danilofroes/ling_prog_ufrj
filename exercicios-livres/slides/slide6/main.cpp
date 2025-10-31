#include <iostream>

using namespace std;

/* 
// Funções sobrecarregadas
int maior(int a, int b) {
    return (a > b) ? a : b;
}

double maior(double a, double b) {
    return (a > b) ? a : b;
}
*/

template <typename T>

T maior (T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intA = 8;
    int intB = 10;
    double decA = 9.4;
    double decB = 4.75;

    cout << "\nMaior valor entre inteiros: " << maior(intA, intB) << endl;
    cout << "Maior valor entre decimais: " << maior(decA, decB) << "\n" << endl;

    return 0;
}