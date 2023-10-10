/* Entrada: un natural n, seguido de n secuencias empezadas con un natural m
 * secuencias de naturales
 * Salida: Por cada secuencia, su minimo, máximo y si media
 */

#include <iostream>
using namespace std;

int max2(int a, int b) {

    int aux = a;
    if (aux < b) aux = b;
    return aux;
}

int main() {
    int sec1;
    cin >> sec1;
    while (sec1 > 0) {

        int sec2;
        cin >> sec2;
        while (sec2 > 0) {

            int num0;
            cin >> num0;

            int max = max2(num0, max);
        }

        --sec1;
    }
}
