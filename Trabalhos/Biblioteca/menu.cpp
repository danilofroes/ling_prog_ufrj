#include <limits>
#include <iostream>

#include "menu.h"
#include "livro.h"

Menu::Menu() {}
Menu::~Menu() {}

void Menu::centralizarTitulo(const string& titulo) {
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

void Menu::exibirMenu() {
    cout << "\n\n";
    cout << "\e[0;30m\e[47m";

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    centralizarTitulo("Menu - Biblioteca");
    cout << "\n1. Imprimir acervo completo" << endl;
    cout << "2. Imprimir informacoes de um livro" << endl;
    cout << "3. Inserir livro" << endl;
    cout << "4. Remover livro" << endl;
    cout << "5. Buscar por autor" << endl;
    cout << "6. Atualizar avaliacao" << endl;
    cout << "7. Comparar bibliotecas" << endl;
    cout << "0. Sair do programa\n" << endl;

    for (unsigned short i = 0; i < TAMANHO_TERMINAL; i++) {
        cout << "-";
    }

    cout << endl;
    cout << "\n";
    cout << "Escolha uma opcao: ";
    cout << "\e[0m";
}

void Menu::imprimirAcervo() {
    // Implementação futura
}

void Menu::imprimirLivro() {
    // Implementação futura
}

void Menu::inserirLivro() {
    Livro novoLivro;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nAdicione um livro ao acervo.\n" << endl;
    cout << "Titulo: ";
    getline(cin, novoLivro.titulo);

    cout << "Autor: ";
    getline(cin, novoLivro.autor);
    

    cout << "Ano de publicacao: ";
    cin >> novoLivro.ano;
    cin.ignore();

    cout << "Avaliacao (0.0 a 10.0): ";
    cin >> novoLivro.avaliacao;
    cin.ignore();

}

void Menu::removerLivro() {
    // Implementação futura
}

void Menu::buscarPorAutor() {
    // Implementação futura
}

void Menu::atualizarAvaliacao() {
    // Implementação futura
}

void Menu::compararBibliotecas() {
    // Implementação futura
}