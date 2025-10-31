#include <iostream>
#include <cstdlib>
#include <string>

#include "menu.h"

using namespace std;

#define OK 0

extern string pathDataset;
extern string colunaTarget;
extern enum MetodoDivisao { HOLDOUT, VALIDACAO_CRUZADA } metodo_divisao;

int main() {
    unsigned short int opcao;

    do {
        exibirMenuPrincipal();
        cin >> opcao;

        switch (opcao) {
            case 1:
                do {
                    exibirMenuDados();
                    cin >> opcao;

                    switch (opcao) {
                        case 1:
                            cin >> pathDataset;
                            break;
                        case 2:
                            cout << "Funcionalidade de visualizar dataset ainda nao implementada." << endl;
                            break;
                        case 0:
                            cout << "Retornando ao menu principal..." << endl;
                            break;
                        default:
                            cout << "Opcao invalida. Tente novamente." << endl;
                            break;
                    }
                } while (opcao != 0);
                break;

            case 0:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 0);

    return OK;
}