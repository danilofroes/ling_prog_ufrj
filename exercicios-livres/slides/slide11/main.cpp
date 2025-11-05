#include "lampada.h"

int main() {
    Lampada lampadaSala;
    Lampada *ptrLampada = &lampadaSala;

    lampadaSala.imprimirEstado();
    ptrLampada->acender();
    lampadaSala.imprimirEstado();
}