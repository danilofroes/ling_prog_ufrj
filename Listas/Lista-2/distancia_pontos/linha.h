#ifndef LINHA_H
#define LINHA_H

#include "ponto.h"

class Linha {
    public:
        Linha(Ponto, Ponto);

        void setPonto1(Ponto);
        void setPonto2(Ponto);

        double getComprimento();

    private:
        Ponto ponto1, ponto2;
};

#endif