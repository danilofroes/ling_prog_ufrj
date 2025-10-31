#include <iostream>
#include <string>

using namespace std;

int contadorChamada() {
    static int contador = 0;
    contador++;
    return contador;
}

int main() {
    const unsigned short totalChamadas = 5;

    for (unsigned short i = 0; i < totalChamadas; i++) {
        cout << "Chamada numero: " << contadorChamada() << endl;
    }

    return 0;
}