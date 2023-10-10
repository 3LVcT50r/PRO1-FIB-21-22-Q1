//El programa te dice el numero de ventas hechas si cumplen unas cocndiciones
//INPUT: una string con dos enteros y una secuencia de enteros acabadas en -1
//OUTPUT: el mismo string con un numero si cumplen las condiciones y una string
// si no las cumplen.

#include <iostream>
using namespace std;

bool condicion1(int m, int p) {
    if (m%p == 0) return true;
    else return false;
}

bool condicion2() {

    
}

int main() {

    string vegetal;
    while (cin >> vegetal) {

        int m;
        int p;
        cin >> m >> p;

        int total = 0;
        int ventas;
        cin >> ventas;

        while (ventas != -1) {
            total += ventas;
            cin >> ventas;
        }
        if (condicion(m, p)) cout << vegetal << ' ' << total << endl;
        else cout << vegetal << " discontinued" << endl;
    } 
}