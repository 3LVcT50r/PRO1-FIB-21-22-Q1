/* Entrada: un entero mayor que 0
 * Salida: El dibujo de una V
 */

#include <iostream>
using namespace std;

int main() {

    //Entero mayor que 0
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j != 1; --j) {
            cout << ' ';
        }
        cout << 'V';
        for (int j = i; n - j > 0; ++j) {
            cout << ' ';
        }
        //cout << ' ';
        for (int j = i; n - j > 1; ++j) {
            cout << ' ';
        }
        if (n - i != 0) cout << 'V';
        cout << endl;
    }
}
