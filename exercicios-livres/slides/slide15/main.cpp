#include <iostream>

class Robo {
    friend void recargaExterna(Robo &r, int novaCarga);

    public:
        Robo(int carga) : nivelBateria(carga) {}

        void imprimirBateria() const {
            std::cout << "Bateria: " << nivelBateria << "%" << std::endl;
        }

    private:
        int nivelBateria;
};

void recargaExterna(Robo &r, int novaCarga) {
    r.nivelBateria = novaCarga; 
}


int main() {
    Robo billie(20);
    
    billie.imprimirBateria();

    recargaExterna(billie, 100); 
    
    billie.imprimirBateria();

    return 0;
}