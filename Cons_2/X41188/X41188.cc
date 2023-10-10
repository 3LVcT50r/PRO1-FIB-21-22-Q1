//El programa te dice la posicion del primer numero univariado en una secuencia
//Un numero univariado es aquel que todos sus digitos son iguales
//INPUT: una secuencia de enteros positivos acabados en -1
//OUTPUT: un entero mayor o igual que 0 que dice la posicion

#include <iostream>
using namespace std;

//La funcion prueba si un entero es univariado
//Pre: un entero mayor que 0
//Post: true si es univariado, false si no lo es
bool is_univariate(int n) {

    if (n < 10) return true;
    else {
        if ((n%100)/10 != 0) {
            if ((n%100)/10 == n%10) return is_univariate(n/10);
            else return false;
        } else if (n/100 < 100) {
            return is_univariate(n/10);
        } else return false;
    }
}

int main() {

    int sec_num;
    cin >> sec_num;

    bool condicion = false;

    int count = 0;

    while (not condicion and sec_num != -1) {

        if (is_univariate(sec_num)) condicion = true;

        ++count;
        cin >> sec_num;
    }

    if (condicion) cout << count << endl;
    else cout << 0 << endl;
}
