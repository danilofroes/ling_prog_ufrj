#include <iostream>

using namespace std;

int somar(int a, int b) {
    return a + b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int calcular(int a, int b, int (*funcPtr)(int, int)) {
    return (*funcPtr)(a, b);
}

int main() {
    cout << calcular(10, 20, multiplicar) << endl;
    cout << calcular(10, 20, somar) << endl;

    return 0;
}