#include <iostream>

using namespace std;

class Bateria {
    public:
        Bateria(int c) : carga(c) {}

        void imprimir() const {
            cout << "O valor da carga eh " << carga << endl;
        }

    private:
        int carga;
};

class Motor {
    public:
        Motor(int v) : velocidade(v) {}

        void imprimir() const {
            cout << "A velocidade atual eh " << velocidade << endl;
        }

    private:
        int velocidade;
};

class Robo {
    public:
        Robo(int cargaInicial, int velInicial) : bateria(cargaInicial), motor(velInicial) {}

        void imprimirStatus() const {
            bateria.imprimir();
            motor.imprimir();
        }

    private:
        Bateria bateria;
        Motor motor;
};

int main() {
    Robo billie(100, 50);

    billie.imprimirStatus();

    return 0;
}