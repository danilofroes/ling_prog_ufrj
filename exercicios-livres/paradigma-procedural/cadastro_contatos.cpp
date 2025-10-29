/*
Código de um pequeno sistema de cadastro de contatos usando o paradigma procedural em C++
*/

#include <iostream>
#include <vector>
#include <string>

// Struct das variáveis armazenadas em cada contato
struct Contato {
    unsigned int id;
    std::string nome;
    std::string telefone;
};

std::vector<Contato> agenda;  // Vector que recebe os itens do struct Contato
unsigned int contador_id = 1; // O primeiro ID será 1 e será incrementado a cada adição

/**
 * @brief Procedimento para adicionar um contato
 */
void adicionarContato() {
    Contato novo_contato;
    novo_contato.id = contador_id++;

    std::cout << "Digite o nome do contato: ";
    std::getline(std::cin >> std::ws, novo_contato.nome);

    std::cout << "Digite o telefone do contato: ";
    std::getline(std::cin >> std::ws, novo_contato.telefone);

    agenda.push_back(novo_contato);
    std::cout << "\nContato " << novo_contato.nome << " adicionado com sucesso\n";
}

/**
 * @brief Procedimento para listar todos os contatos adicionados
 */
void listarContatos() {
    std::cout << "\n----- Lista de Contatos -----\n";

    if (agenda.empty())
        std::cout << "Agenda está vazia\n";

    for (const auto& contato : agenda)
        std::cout << "ID: " << contato.id << " | Nome: " << contato.nome << " | Telefone: " << contato.telefone << std::endl;

    std::cout << "-----------------------------\n";
}

/**
 * @brief Função principal para rodar a agenda
 */
int main() {
    unsigned short int opcao;

    do {
        std::cout << "\nMenu:\n1. Adicionar Contato\n2. Listar Contatos\n0. Sair\nEscolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            
            case 2:
                listarContatos();
                break;
            
            default:
                std::cout << "A opção inserida não existe, responda com 0, 1 ou 2\n";
                break;
        }
    } while (opcao != 0);

    return 0;
}