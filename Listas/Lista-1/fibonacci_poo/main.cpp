/*
Programa para exibir o n-ésimo número de Fibonacci
Autor: Danilo Fróes
*/

#include <iostream>
#include "fibonacci.h"

using namespace std;

int main() {
    Fibonacci fibonacci;
    int numero;

    cout << "\nInsira um numero inteiro positivo para exibir seu n-esimo numero na sequencia de Fibonacci: ";
    cin >> numero;

    fibonacci.setFibonacci(numero);

    cout << "\n\nResultado: " << fibonacci.getFibonacci() << endl;

    return 0;
}