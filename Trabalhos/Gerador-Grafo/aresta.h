// Arquivo com as declaracoes da classe Aresta

#ifndef ARESTAS_H
#define ARESTAS_H

#include "vertice.h"

class Aresta {
    private:
        Vertice* origem;
        Vertice* destino;
        double peso;

    public:
        Aresta(Vertice* origem, Vertice* destino, double peso);

        Vertice* getOrigem() const;
        Vertice* getDestino() const;
        double getPeso() const;
};

#endif