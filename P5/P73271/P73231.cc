/* La funcion tiene que dar la el maximo de los cuatro enteros */

#include <iostream>
using namespace std;

int max2(int a, int b) {

    int aux = a;
    if (aux < b) aux = b;
    return aux;
}

int max4(int a, int b, int c, int d) {

    int aux1 = max2(a, b);
    int aux2 = max2(c ,d);
    int aux3 = max2(aux1, aux2);

    return aux3;

}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max4(a, b, c, d) << endl;
}
