#include <iostream>
#include <string>

using namespace std;

class Robo {
    public:
        Robo(int _id, string _nome) : id(_id), nome(_nome) {}

        void setNome(string n) { nome = n; }
        string getNome() const { return nome; }
        int getID() const { return id; }


    private:
        const int id;
        string nome;
};

int main() {
    Robo ze(1, "Ze Pequeno");
    const Robo billie(2, "Billie");

    ze.setNome("Ze"); 

    // Objeto constante falha na compilação
    // billie.setNome("Eilish");

    cout << ze.getNome() << endl;
    cout << ze.getID() << endl;

    cout << billie.getNome() << endl;
    cout << billie.getID() << endl;

    return 0;
}