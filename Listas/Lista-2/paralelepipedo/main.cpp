/*
Programa para calcular o volume de um paralelepípedo
Autor: Danilo Fróes
*/

#include <iostream>
#include "paralelepipedo.h"

using namespace std;

int main() {
    double x, y, z;

    cout << "\nInsira as 3 dimensoes do paralelepipedo (X x Y x Z): ";
    cin >> x >> y >> z;

    Paralelepipedo paralelepipedo(x, y, z);

    cout << "\n\nO valor do volume do paralelepipedo eh: " << paralelepipedo.getVolume() << endl;

    return 0;
}