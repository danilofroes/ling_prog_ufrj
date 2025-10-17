// Arquivo com as implementacoes da classe Vertice

#include "vertice.h"

using namespace std;

Vertice::Vertice(unsigned short id, const string& nome) {
    this->id = id;
    this->nome = nome;
}

unsigned short Vertice::getId() const {
    return this->id;
}

string Vertice::getNome() const {
    return this->nome;
}