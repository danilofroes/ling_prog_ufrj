#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3};

    for (auto &n : numeros) {
        n = n + 10; 
    }

    for (auto n : numeros) {
        n = n * 10;
    }

    for (auto n : numeros) {
        cout << n << endl;
    }

    return 0;
}