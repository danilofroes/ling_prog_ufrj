// Arquivo com as implementacoes das funcoes de exibicao no terminal

#include "terminal.h"

using namespace std;

#define TAMANHO_TERMINAL 100

void exibirMenu() {
    cout << "\n\n";
    cout << "\e[0;30m\e[47m";

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    centralizarTitulo("Menu - Gerador e Analisador de Grafos");
    cout << "\n1. Imprimir matriz de adjacencias do grafo" << endl;
    cout << "2. Imprimir densidade do grafo" << endl;
    cout << "3. Imprimir lista de vertices em ordem decrescente de grau" << endl;
    cout << "4. Calcular caminho minimo com Dijkstra" << endl;
    cout << "5. Verificar se todos os vertices estao acessiveis uns aos outros" << endl;
    cout << "0. Sair do programa\n" << endl;

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    cout << "\n";
    cout << "Escolha uma opcao: ";
    cout << "\e[0m";
}

void centralizarTitulo(const string& titulo) {
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