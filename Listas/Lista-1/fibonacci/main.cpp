/*
Programa para exibir o n-ésimo número de Fibonacci
Autor: Danilo Fróes
*/

#include <iostream>
#include "fibonacci.h"

using namespace std;

int main() {
    int numero;

    cout << "Insira um número inteiro positivo para exibir seu n-ésimo número na sequência de Fibonacci:";
    cin >> numero;

    cout << "Resultado:" << calcularFibonacci(numero) << endl;

    return 0;
}