#include <iostream>

using namespace std;

int main() {
    int x = 30;
    int y = 9;

    int *ptrX = &x;
    int &refX = x;

    cout << "\nValores iniciais:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "ptrX = " << ptrX << endl;
    cout << "refX = " << refX << endl;

    *ptrX = 10;

    cout << "\nAlterando o valor de *ptrX:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "ptrX = " << ptrX << endl;
    cout << "refX = " << refX << endl;

    refX = 15;

    cout << "\nAlterando o valor de refX:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "ptrX = " << ptrX << endl;
    cout << "refX = " << refX << endl;

    *ptrX = y;

    cout << "\nAlterando o valor de *ptrX para y:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "ptrX = " << ptrX << endl;
    cout << "refX = " << refX << endl;

    return 0;
}