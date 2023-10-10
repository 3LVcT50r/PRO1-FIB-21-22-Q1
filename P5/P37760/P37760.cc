//Entrada: una secuencia de angules reales
//Salida: El seno y el coseno de cada angulos con 6 decimales

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double num;

	while (cin >> num) {

		double cte = (num * M_PI) / 180;

		cout.setf(ios::fixed);
		cout.precision(6);

		cout << sin(cte) << ' ' << cos(cte) << endl;
	}
}