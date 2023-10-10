//Entrada: Secuencias comenzadas en un entero n seguido de n enteros
//Salida: EL maximo de cada secuencia

#include <iostream>
using namespace std;

int main() {

    //Secuencia de enteros
    int sec;
    while (cin >> sec) {

        //Numeros enteros
        int num;

        //Maximo de los enteros
        int max;
        cin >> max;

        for (int i = 1; i < sec; i++) {

            cin >> num;
            if (max < num) max = num;
        }

        cout << max << endl;
    }
}
