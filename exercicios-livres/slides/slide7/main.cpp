#include <iostream>

using namespace std;

void modificarArray(int meuArr[]) {
    meuArr[0] = 99;
    meuArr[2] = 77;
}

int main() {
    int numeros[3] = {10, 20, 30};

    cout << "Antes: " << numeros[0] << " " << numeros[2] << endl;

    modificarArray(numeros);

    cout << "Depois: " << numeros[0] << " " << numeros[2] << endl;

    return 0;
}