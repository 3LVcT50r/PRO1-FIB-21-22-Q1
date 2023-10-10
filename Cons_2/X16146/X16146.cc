//El programa quita los ceros de un numero
//INPUT: Una secuencia de enteros mayores que cero
//OUTPUT: el valor de cada entero mayor que cero sin los ceros del numero

#include <iostream>
using namespace std;

// Pre: x > 0
// Post: retorna el valor que resulta de eliminar a x sus dígitos igual a 0
int elimina_ceros(int x) {

    if (x < 10) return x;
    else {
        if (x%10 == 0) return elimina_ceros(x/10);
        else return elimina_ceros(x/10)*10 + x%10;
    }
}

int main() {

    int x;
    while (cin >> x) {

        cout << elimina_ceros(x) << endl;
    }
}