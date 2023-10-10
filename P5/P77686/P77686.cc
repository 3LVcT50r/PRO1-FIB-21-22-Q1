/* La funcion tiene que decir si n es capicua o no */

#include <iostream>
using namespace std;

bool es_capicua(int n) {

    int aux1 = n;
    int reverse = 0;
    while (n != 0) {
        reverse = n%10 + reverse*10;
        n /= 10;
    }

    return (aux1 == reverse);
}

int main() {

    int a;
    cin >> a;

    if (es_capicua(a) == true) cout << "true" << endl;
    else cout << "false" << endl;
}
