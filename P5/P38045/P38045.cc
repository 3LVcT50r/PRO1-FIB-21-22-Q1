//Entrada: una secuencia de numeros naturales
//Salida: el cuadrado y la raiz cuadrada de cada numero

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int num;

	while (cin >> num) {

		int cte = num;

		cout.setf(ios::fixed);
		cout.precision(6);

		cout << cte*cte << ' ' << sqrt(num) << endl;
	}
}