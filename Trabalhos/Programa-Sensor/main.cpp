/*
 * Programa de monitoramento de sensores
 *
 * Autor: Danilo Davi Gomes Fróes
 * Linguagens de Programação - UFRJ
 */

#include <iostream>
#include <cstring>

using namespace std;

typedef unsigned short int byte;

#define LARGURA_MENU 50

void centralizarMensagemMenu(char* mensagem) {
	byte espaco;

	if (strlen(mensagem) > LARGURA_MENU) {
		char* mensagemEncurtada[LARGURA_MENU];
		for(byte i = 0; i <= LARGURA_MENU; i++) {
			mensagemEncurtada[i] = mensagem[i];
		}

		centralizarMensagemMenu(mensagemEncurtada)
	}

	espaco = (strlen(mensagem) % 2 == 0) ? (mensagem - LARGURA_MENU) / 2 : ((mensagem - LARGURA_MENU) / 2) - 1;

	for(byte i = 0; i <= espaco; i++){
		cout << " ";
	}

	cout << mensagem;

	for(byte i = 0; i <= espaco; i++) {
		cout << " ";
	}

	cout << endl;
}

void exibirMenu() {
	byte entradaMenu;

	for(unsigned short i; i <= LARGURA_MENU; i++) {
		cout << "-";
	}

	cout << endl;
	centralizarMensagemMenu("Menu - Central de Monitoramento de Sensores");
	cout << "\n1 - Inserir novo sensor" << endl;
	cout << "2 - Mudar dados de um sensor ja existente\n" << endl;

	for(byte i; i <= LARGURA_MENU; i++) {
	       cout << "-";
	}

	cout << endl;	
	cin >> entradaMenu;
}

int main() {	

	exibirMenu();
	
	

	return 0;
}
