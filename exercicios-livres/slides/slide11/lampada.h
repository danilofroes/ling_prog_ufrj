#ifndef LAMPADA_H
#define LAMPADA_H

class Lampada {
    public:
        Lampada(bool _acesa = false);

        void acender();
        void apagar();

        void imprimirEstado();

    private:
        bool acesa;
};

#endif