//Entrada: un natural
//Salida: si es perfecto o no

#include <iostream>
using namespace std;

bool es_perfecte(int n) {

	//IN: Un numero natural
	//OUT: un booleano si el numero es perfecto o no

	//Sumatorio de todos los divisores del entero
	int sum_div = 1;

	for (int i = 2; i*i <= n; ++i) {

		if (n%i == 0) {
			sum_div += i+n / i;
		}
	}

	//Booleano condicion de la funcion
	bool condicion = false;

	if (sum_div == n) {
		if (n != 0 and n != 1) condicion = true;
	}

	return condicion;
}

int main() {

	int n;
	cin >> n;

	if (es_perfecte(n)) cout << "true";
	else cout << "false";

	cout << endl;
}