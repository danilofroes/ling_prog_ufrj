#include <string>

class Robo {
    public:
        Robo(std::string n);
        void setNome(std::string n);
        std::string getNome();

    private:
        std::string nome;
};