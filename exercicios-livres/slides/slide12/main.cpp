#include <iostream>
#include <cstring>

class Pessoa {
private:
    char *nome;

public:
    Pessoa(const char* n) {
        nome = new char[strlen(n) + 1];
        strcpy(nome, n);
    }

    ~Pessoa() {
        std::cout << "Destruindo " << nome << std::endl;
        delete [] nome;
    }
};

int main() {
    Pessoa p1("Danilo");
    Pessoa p2 = p1;

    return 0;
}