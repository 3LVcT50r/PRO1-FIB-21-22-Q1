// Entrada: Un numero natural n y n secuencias de naturales acabada en 0
//Salida: La cantidad de pares de naturales tales que el segundo numero sea
// mas grande que el primero

#include <iostream>
using namespace std;

int main() {

	//Numero natural de secuencias
	int sec;
	cin >> sec;

	for (int i = 0; i < sec; ++i) {

		//Secuencia de naturales acabas en 0
		int num;
		cin >> num;

		//Ayuda para la ventana
		int a = num;
		int b = num;

		//Contador
		int count = 0;

		while (num != 0) {

			a = b;
			b = num;

			if (b > a) ++ count;

			cin >> num;
		}

		cout << count << endl;

	}
}