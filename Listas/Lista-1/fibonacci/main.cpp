/*
Programa para exibir o n-ésimo número de Fibonacci
Autor: Danilo Fróes
*/

#include <iostream>
#include "fibonacci.h"

using namespace std;

int main() {
    unsigned int numero;

    cout << "\nInsira um numero inteiro positivo para exibir seu n-esimo numero na sequencia de Fibonacci: ";
    cin >> numero;

    cout << "\n\nResultado: " << calcularFibonacci(numero) << endl;

    return 0;
}