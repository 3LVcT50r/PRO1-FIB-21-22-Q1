/* Entrada: En entero no negativo que determine la secuencia de n medidas.
 * Cada medida tiene que tener la letra 'C' o 'F' que define la escala y un
 * real.
 * Salida: Por cada medida, tiene que salir la temperatura equivalente en
 * la escala contraria.
 * FORMULA: n (C) = 1.8n + 32 (F)
 * FORMULA: n (F) = (n - 32) / 1.8 (C)
 */

#include <iostream>
using namespace std;

int main() {

    //Secuencia de medidas no negativo
    int sec;
    cin >> sec;

    while (sec != 0) {

        //Caracter determinante de la unidad
        char unidad;

        //Media real
        double num;

        cin >> unidad >> num;

        //Resultado real
        double result = 0;

        cout.setf(ios::fixed);
        cout.precision(1);

        if (unidad == 'C') {
            result = double(1.8)*num + 32;
            cout << 'F' << ' ' << result << endl;
        } else if (unidad == 'F') {
            result = (num - 32) / double(1.8);
            cout << 'C' << ' ' << result << endl;
        }

        --sec;
    }
}
