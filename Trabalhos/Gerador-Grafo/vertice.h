// Arquivo com as declaracoes da classe Vertice

#ifndef VERTICE_H
#define VERTICE_H

#include <string>

class Vertice {
    private:
        int id;
        std::string nome;

        public:
            Vertice(unsigned short id, const std::string& nome);

            unsigned short getId() const;
            std::string getNome() const;
};

#endif