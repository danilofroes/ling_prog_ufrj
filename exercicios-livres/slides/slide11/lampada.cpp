#include <iostream>

#include "lampada.h"

using namespace std;

Lampada::Lampada(bool _acesa) {
    acesa = _acesa;
}

void Lampada::acender() {
    acesa = true;
}

void Lampada::apagar() {
    acesa = false;
}

void Lampada::imprimirEstado() {
    if (acesa == true)
        cout << "A lampada esta acesa" << endl;
    
    else
        cout << "A lampada esta apagada" << endl;
}