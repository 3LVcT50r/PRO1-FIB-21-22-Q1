//El programa, dada unas secuencias de numeros, te dice cuantos de ellos
// coindiden en dos condiciones.
//CONDICION 1: Que el numero sea inferior a todos sus anteriores
//CONDICION 2: QUe el numero sea inferior al siguiente numero
//INPUT: Una natural que dice el total de secuencias de naturales acabadas
// en 0
//OUTPUT: Un entero mayor o igual a 0 que dicen cuantos numeros cumplen las
// condiciones

#include <iostream>
using namespace std;

//La funcion lee las secuencias, reconoce las condiciones y expulsa la
// cantidad de naturales que lo cumplen
//Pre: -
//Post: el contador mayor o igual a 0 que dice el numero de naturales que
// cumplen las condiciones
int secuencias() {

    //Primer natural
    int num1;
    cin >> num1;

    //Natural donde se ejecuta las comparaciones
    int num2;
    cin >> num2;

    //Contador de naturales que cumple la condicion;
    int count = 0;

    //Natural siguiente para compararlo con el segundo
    int num3;

    //Comparacion para saber si el primer valor cumple la segunda condicion
    if (num1 < num2) ++count;

    //Memoria para saber el minimo de los numeros anteriores
    int minimo = num1;

    while (num2 != 0) {

        //Calculo para saber la primera condicion
        bool condicion1 = false;
        if (minimo > num2) {
            minimo = num2;
            condicion1 = true;
        }
        num1 = num2;

        //Calculo para saber la segunda condicion
        cin >> num3;
        bool condicion2 = false;
        if (num3 != 0) {
            if (num2 < num3) condicion2 = true;
        }
        num2 = num3;

        if (condicion2 and condicion1) ++count;
    }

    return count;
}

int main() {

    int sec;
    cin >> sec;

    for (int i = 0; i < sec; ++i) {

        cout << secuencias() << endl;
    }
}