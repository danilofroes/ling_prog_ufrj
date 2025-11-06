#include <string>
#include <array>

class Agenda {
    public:
        void setNames();
        void imprimirNomes();

    private:
        std::array<std::string, 3> nomes;
        std::string validacaoNome(std::string);
};