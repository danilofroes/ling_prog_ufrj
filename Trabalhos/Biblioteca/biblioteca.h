#include <string>
#include <vector>

#include "livro.h"

class Biblioteca {
    public:
        Biblioteca(unsigned int tamanho);
        ~Biblioteca();

        void operator+(const Livro& livro);
        void operator-(const Livro& livro);
        vector<Livro> operator[](const string& autor) const;
        bool operator()(const string& titulo, double novaAvaliacao);
        bool operator>(const Biblioteca& outra) const;
        friend ostream& operator<<(ostream& os, const Biblioteca& biblioteca);
        vector<Livro> getAcervo() const;
        void setLivro(vector<Livro>& novoLivro);

    private:
        vector<Livro> acervo;
        unsigned int tamanhoMaximo;
};