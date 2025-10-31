#include <iostream>

#include "menu.h"

using namespace std;

#define TAMANHO_TERMINAL 100

bool datasetAdicionado = false;
bool metodoDivisaoEscolhido = false;
bool targetAdicionado = false;

void centralizarMensagemTerminal(const string& titulo) {
    unsigned short espacos = (TAMANHO_TERMINAL - titulo.length()) / 2;

    cout << "\n";

    for (unsigned short i = 0; i < espacos; i++) {
        cout << " ";
    }

    cout << titulo;

    for (unsigned short i = 0; i < espacos; i++) {
        cout << " ";
    }

    cout << endl;

    cout << "\n";
}

void exibirMenuPrincipal() {
    cout << "\n\n";
    cout << "\e[0;30m\e[47m";

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    centralizarMensagemTerminal("Menu Principal");
    cout << "\n1. Gerenciar dataset" << endl;
    cout << "2. Gerenciar pre-processamento" << endl;
    cout << "3. Gerenciar modelos" << endl;
    cout << "4. Gerenciar hyperparametros" << endl;
    cout << "5. Gerenciar metricas de avaliacao" << endl;
    cout << "0. Sair do programa\n" << endl;

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    cout << "\n";
    cout << "Escolha uma opcao: ";
    cout << "\e[0m";
}

void exibirMenuDados() {
    cout << "\n\n";
    cout << "\e[0;30m\e[47m";

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    centralizarMensagemTerminal("Menu de gerenciamento do dataset");
    if (datasetAdicionado)
        cout << "\n1. Alterar path do dataset" << endl;
    else
        cout << "\n1. Adicionar path do dataset" << endl;
    if (targetAdicionado)
        cout << "3. Alterar coluna target" << endl;
    else
        cout << "3. Escolher coluna target" << endl;
    if (metodoDivisaoEscolhido)
        cout << "3. Alterar método de divisao de dados" << endl;
    else
        cout << "3. Escolher método de divisao de dados" << endl;
    cout << "0. Voltar para o menu principal\n" << endl;

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    cout << "\n";
    cout << "Escolha uma opcao: ";
    cout << "\e[0m";
}