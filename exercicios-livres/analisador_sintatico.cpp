/*
    Código que valida uma sentença de uma "mini-linguagem de programação", simulando
    o que um analisador sintático faria.

    Autor: Danilo Fróes
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

/*
    Regra BNF da mini-linguagem: 

    <atribuicao> ::= <identificador> "=" <valor> ";"
    <indetificador> ::= "a" | "b" | "c" | ... | "z" | A | B | ... | Z
    <valor> ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
*/

int main() {
    string sentenca;

    cout << "Insira uma sentenca que faca uma atribuicao na mini-linguagem: ";
    getline(cin, sentenca);

    sentenca.erase(remove(sentenca.begin(), sentenca.end(), ' '), sentenca.end());

    if (sentenca.length() == 4 && isalpha(sentenca[0]) && sentenca[1] == '=' && isdigit(sentenca[2]) && sentenca[3] == ';')
        cout << "Sentenca valida" << endl;

    else
        cout << "Sentenca invalida" << endl;

    return 0;
}