/* La funcion tiene que decir si n es capicua o no */

#include <iostream>
using namespace std;

int contar_digit(int n) {

    int contador = 1;

    while (n/10 != 0) {
        n /= 10;
        ++contador;
    }

    return contador;
}

int power(int a, int b) {

    int aux = a;
    for (int i = 1; i < b; ++i) {
        aux *= a;
    }
    return aux;
}

int main() {
    int a, b;

    cin >> a >> b;

    int m = power(a ,b);

    cout << m << endl;
}
