#include "paralelepipedo.h"

Paralelepipedo::Paralelepipedo(double inX, double inY, double inZ) {
    setX(inX);
    setY(inY);
    setZ(inZ);
}

void Paralelepipedo::setX(double inX) {
    if (inX < 0)
        x = 1;

    x = inX;
}

void Paralelepipedo::setY(double inY) {
    if (inY < 0)
        y = 1;

    y = inY;
}

void Paralelepipedo::setZ(double inZ) {
    if (inZ < 0)
        z = 1;

    z = inZ;
}

double Paralelepipedo::computeVolume() { return x * y * z; }

double Paralelepipedo::getVolume() { return computeVolume(); }