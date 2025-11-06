#include <iostream>

#include "agenda.h"

using namespace std;

string Agenda::validacaoNome(string nome) {
    if (nome.length() > 10) {
        cout << "O nome passou do limite de 10 caracteres e foi truncado no 10° caracter" << endl;
        return nome.substr(0, 10);
    }
    
    return nome;
}

void Agenda::setNames() {
    string nome;

    for (unsigned short i = 0; i < 3; i++) {
        cout << "\nInsira o nome " << (i + 1) << ": ";
        getline(cin, nome);
        nomes[i] = validacaoNome(nome);
    }
}

void Agenda::imprimirNomes() {
    cout << "\nNomes na agenda:\n" << endl;

    for(string nome : nomes)
        cout << nome << endl;

    cout << endl;
}