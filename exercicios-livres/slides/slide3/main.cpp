#include <iostream>
#include <string>

using namespace std;

class Robo {
    public:
        void setNome(string n) {
            nome = n;
        };
        string getNome() {
            return nome;
        };

    private:
        string nome;
};

int main() {
    Robo zePequeno;

    zePequeno.setNome("Ze Pequeno");
    cout << "\nO nome do robo eh " << zePequeno.getNome() << "\n" << endl;

    return 0;
}