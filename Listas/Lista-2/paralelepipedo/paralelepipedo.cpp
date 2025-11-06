#include "paralelepipedo.h"
#include <iostream>

using namespace std;

Paralelepipedo::Paralelepipedo(double inX, double inY, double inZ) {
    setX(inX);
    setY(inY);
    setZ(inZ);
}

double Paralelepipedo::checarValor(double valor, const char* dimensao) {
    if (valor <= 0) {
        cout << "\nDimensao " << dimensao << " eh negativa ou zero, assumindo valor 1 por padrao.";
        return valor = 1;
    }

    return valor;
}

void Paralelepipedo::setX(double inX) { x = checarValor(inX, "X"); }

void Paralelepipedo::setY(double inY) { y = checarValor(inY, "Y"); }

void Paralelepipedo::setZ(double inZ) { z = checarValor(inZ, "Z"); }

double Paralelepipedo::computeVolume() { return x * y * z; }

double Paralelepipedo::getVolume() { return computeVolume(); }