//El programa te da una aproximacion del numero e
//INPUT: Una serie de naturales entre el 0 al 20
//OUTPUT: Una serie de aproximaciones de naturales de e con 10 cifras decimales

//OBSERVACION: Todos los calculos se hacen con numeros reales

#include <iostream>
using namespace std;

//La funcion te devuelve el factorial
//Pre: un natural mayor o igual que 0
//Post: el factorial, que es un natural mayor o igual que 1
double factorial(double x) {

    if (x > 1) return x * factorial(x - 1);
    else return 1;
}

//La funciont te devuelve la funcion de polinomio taylor para calcuar
// el valor de e
//Pre: un natural mayor o igual que 0
//Post: el valor de e que es un real
double funct_taylor(double x) {
    
    if (x >= 0) {
        return double(1)/factorial(x) + funct_taylor(x - 1);
    } else return 0;
}

int main() {

    double num;

    while (cin >> num) {

        --num;

        int num_1 = num + 1;

        cout.setf(ios::fixed);
        cout.precision(100);
        cout << "Amb " << num_1 << " terme(s) s'obte ";
        cout << funct_taylor(num) << '.' << endl;
    }
}
