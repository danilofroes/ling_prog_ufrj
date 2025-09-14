#include "paralelepipedo.h"
#include <iostream>

using namespace std;

Paralelepipedo::Paralelepipedo(double inX, double inY, double inZ) {
    setX(inX);
    setY(inY);
    setZ(inZ);
}

void Paralelepipedo::setX(double inX) {
    if (inX <= 0) {
        x = 1;
        cout << "\nDimensao X eh negativa ou zero, assumindo valor 1 por padrao.";
    }

    else
        x = inX;
}

void Paralelepipedo::setY(double inY) {
    if (inY <= 0) {
        y = 1;
        cout << "\nDimensao Y eh negativa ou zero, assumindo valor 1 por padrao.";
    }

    else
        y = inY;
}

void Paralelepipedo::setZ(double inZ) {
    if (inZ <= 0) {
        z = 1;
        cout << "\nDimensao Z eh negativa ou zero, assumindo valor 1 por padrao.";
    }

    else
        z = inZ;
}

double Paralelepipedo::computeVolume() { return x * y * z; }

double Paralelepipedo::getVolume() { return computeVolume(); }