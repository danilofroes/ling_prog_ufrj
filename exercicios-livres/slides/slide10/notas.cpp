#include <iostream>
#include <vector>

using namespace std;

double getMedia(const vector<double> &v) {
    double somaNotas = 0;

    for (double nota : v)
        somaNotas += nota;

    return somaNotas / v.size();
}

double getMaiorNota(const vector<double> &v) {
    double maiorNota = -1;

    for (double nota : v) {
        if (nota > maiorNota)
            maiorNota = nota;
        else
            continue;
    }

    return maiorNota;
}

double analisarNotas(const vector<double> &v, double (*funcPtr)(const vector<double> &)) {
    return (*funcPtr)(v);
}

int main() {
    vector<double> notas = {6.5, 8.0, 9.5};

    cout << analisarNotas(notas, getMedia) << endl;
    cout << analisarNotas(notas, getMaiorNota) << endl;

    return 0;
}