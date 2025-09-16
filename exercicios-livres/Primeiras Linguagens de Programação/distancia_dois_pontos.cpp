#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1, x2, y1, y2;
    float resultado;

    cout << "Insira o valor da primeira coordenada com apenas numeros (x, y): ";
    cin >> x1 >> y1;

    cout << "Agora insira da mesma forma o valor da segunda coordenada: ";
    cin >> x2 >> y2;

    resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distancia entre os pontos (" << x1 << ", " << y1 << ") e (" << x2 << ", " << y2 << ") eh igual a " << resultado << endl;

    return 0;
}