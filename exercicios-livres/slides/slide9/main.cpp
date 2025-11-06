#include <iostream>

using namespace std;

void imprimirArray(const int *arr, const int tamanho) {
    for (int i = 0; i < tamanho; i++)
        cout << *(arr + i) << " ";

    cout << endl;
}

void dobrarValoresArray(int *arr, const int tamanho) {
    for (int i = 0; i < tamanho; i++)
        *(arr + i) *= 2;
}

int main() {
    const int tamanhoArray = 10;
    int numeros[tamanhoArray] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    imprimirArray(numeros, tamanhoArray);
    dobrarValoresArray(numeros, tamanhoArray);
    imprimirArray(numeros, tamanhoArray);
    
    return 0;
}