#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Funcionario {
    int     id;
    string  nome;
    string  cargo;
    double  salario;
};

void exibeRelatorio(Funcionario func) {
    cout << "--------- RELATORIO DE DADOS DO FUNCIONARIO ---------" << endl;
    cout << "ID do Funcionario..: " << func.id << endl;
    cout << "Nome...............: " << func.nome << endl;
    cout << "Cargo..............: " << func.cargo << endl;
    cout << "Salario............: R$ " << fixed << setprecision(2) << func.salario << endl;
    cout << "-----------------------------------------------------" << endl;
}

int main() {
    Funcionario Danilo = {
        1812,
        "Danilo Froes",
        "Eng. de Eletronica e Computacao",
        12903
    };

    exibeRelatorio(Danilo);

    return 0;
}