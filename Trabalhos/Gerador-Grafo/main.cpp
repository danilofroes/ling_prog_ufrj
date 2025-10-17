/*
 * Programa: Gerador e Analisador de Grafos
 * 
 * Autor: Danilo Davi Gomes Froes
 * Descricao:
 *   Arquivo principal do programa que gera e analisa grafos a partir de um arquivo de texto.
 *
 */

#include <iostream>
#include <stdlib.h>
#include <string>

#include "grafo.h"
#include "terminal.h"

using namespace std;

#define NUMERO_ARGUMENTOS 1

#define OK                         0
#define NUMERO_ARGUMENTOS_INVALIDO 1
#define GRAFO_INVALIDO             2

int main(int argc, char** argv) {
    string nomeArquivo;
    unsigned short opcao;
    Grafo grafo;

    if (argc < NUMERO_ARGUMENTOS + 1) {
        cerr << "Uso: " << argv[0] << " <caminho_do_arquivo>" << endl;
        exit(NUMERO_ARGUMENTOS_INVALIDO);
    }

    nomeArquivo = argv[1];
    grafo.carregarArquivo(nomeArquivo);

    if (grafo.getNumeroVertices() == 0) {
        cerr << "O grafo carregado esta vazio ou o arquivo nao foi carregado." << endl;
        exit(GRAFO_INVALIDO);
    }

    do {
        exibirMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                grafo.imprimirMatrizAdjacencia();
                break;

            case 2:
                grafo.imprimirDensidade();
                break;

            case 3:
                grafo.imprimirCentralidadeGrau();
                break;
            
            case 4:
                grafo.calcularCaminhoMinimoDijkstra();
                break;
            
            case 5:
                grafo.verificarAcessibilidade();
                break;

            case 0:
                cout << "\nEncerrando programa.\n\n" << endl;
                break;
            
            default:
                cout << "\nOpcao invalida. Tente novamente.\n\n" << endl;
                break;
        }
    } while (opcao != 0);


    return OK;
}