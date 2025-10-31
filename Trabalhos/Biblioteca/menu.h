#include <iostream>
#include <string>

class Menu {
    public:
        Menu();
        ~Menu();
        static void exibirMenu();
        static void imprimirAcervo();
        static void imprimirLivro();
        static void inserirLivro();
        static void removerLivro();
        static void buscarPorAutor();
        static void atualizarAvaliacao();
        static void compararBibliotecas();

    private:
        static const unsigned short TAMANHO_TERMINAL = 100;

        static void centralizarTitulo(const std::string& titulo);
};