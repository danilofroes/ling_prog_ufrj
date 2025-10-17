// Arquivo com as implementacoes da classe Aresta

#include "aresta.h"

Aresta::Aresta(Vertice* origem, Vertice* destino, double peso) {
    this->origem = origem;
    this->destino = destino;
    this->peso = peso;
}

Vertice* Aresta::getOrigem() const {
    return this->origem;
}

Vertice* Aresta::getDestino() const {
    return this->destino;
}

double Aresta::getPeso() const {
    return this->peso;
}