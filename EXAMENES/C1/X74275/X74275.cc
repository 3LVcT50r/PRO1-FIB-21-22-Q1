/* Entrada: un entero n con una secuencia de enteros m's acabada en -1
 * Salida: Si n ha encontrado un elemento complementario, decir cual es y en
 * que posicion se encuentra, si no, poner "No existe"
 */

#include <iostream>
using namespace std;

int main() {

    //Primer entero no negativo
    int num1;
    cin >> num1;

    //Secuencia de segundos enteros no negativos
    int num2;
    cin >> num2;

    //Condicion para salir del bucle
    bool condicion = false;

    //Contador para saber la posicion
    int count = 0;

    //Memoria del segundo entero que SI cumple como complementario
    int mem2 = 0;

    while (not condicion and num2 != -1) {
        if ((num1 + num2) % 10 == 0) {
            condicion = true;
            mem2 = num2;
        }
        ++count;
        cin >> num2;
    }

    if (condicion) cout << mem2  << ": " << count << endl;
    else cout << "No existe" << endl;
}
