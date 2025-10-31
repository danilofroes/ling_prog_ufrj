#include <string>

#include "robo.h"

Robo::Robo(std::string n) {
    setNome(n);
}

void Robo::setNome(std::string n) {
    nome = n;
}

std::string Robo::getNome() {
    return nome;
}