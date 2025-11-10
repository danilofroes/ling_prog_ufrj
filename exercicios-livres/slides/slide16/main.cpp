#include <iostream>

using namespace std;

class Lampada {
    public:
        Lampada(bool _acesa = false) : acesa(_acesa) {}

        Lampada &acender() {
            acesa = true;
            return *this;
        }

        Lampada &apagar() {
            acesa = false;
            return *this;
        }

        const Lampada &imprimirEstado() const {
            cout << "A lampada esta " << (acesa ? "acesa" : "apagada") << endl;
            return *this;
        }

    private:
        bool acesa;
};

int main() {
    Lampada lampada;

    // chamada cascata
    lampada.acender().imprimirEstado();

    return 0;
}