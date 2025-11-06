#include "linha.h"

#include <cmath>

Linha::Linha(Ponto p1, Ponto p2) {
    ponto1 = p1;
    ponto2 = p2;
}

void Linha::setPonto1(Ponto p) { ponto1 = p; }
void Linha::setPonto2(Ponto p) { ponto2 = p; }

double Linha::getComprimento() {
    double compX, compY, compZ, comprimento;

    compX = pow(ponto1.getCoordX() - ponto2.getCoordX(), 2);
    compY = pow(ponto1.getCoordY() - ponto2.getCoordY(), 2);
    compZ = pow(ponto1.getCoordZ() - ponto2.getCoordZ(), 2);

    comprimento = sqrt(compX + compY + compZ);

    return comprimento;
}