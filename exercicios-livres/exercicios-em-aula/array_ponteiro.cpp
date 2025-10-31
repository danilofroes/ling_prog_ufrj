#include <iostream>

using namespace std;

int main() {
    int array[] = {1, 2, 3};

    cout << array << endl;

    cout << array + 1 << endl;

    int* ptr = array;

    ptr++;

    cout << ptr << endl;

    cout << *ptr << endl;

    int* ptr2 = ptr;

    cout << ptr2 << endl;

    cout << ptr2[0] << endl;

    cout << &array[1] - &array[0] << endl;

    return 0;
}