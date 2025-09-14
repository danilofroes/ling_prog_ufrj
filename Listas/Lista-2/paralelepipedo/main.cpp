/*
Programa para calcular o volume de um paralelepípedo
Autor: Danilo Fróes
*/

#include <iostream>
#include "paralelepipedo.h"

using namespace std;

int main() {
    double inX, inY, inZ;

    cout << "\nInsira as 3 dimensoes do paralelepipedo (X x Y x Z): ";
    cin >> inX >> inY >> inZ;

    Paralelepipedo paralelepipedo(inX, inY, inZ);

    cout << "\n\nO valor do volume do paralelepipedo eh: " << paralelepipedo.getVolume() << endl;

    return 0;
}