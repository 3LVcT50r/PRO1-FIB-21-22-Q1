//Entrada: Tres numeroes enteros que definen una fecha
//Salida: Si la fecha es valoida o no

#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {

	//IN: un entero
	//OUT: un booleano diciendo si es un año bisiesto

	bool traspas = false;

	if (any % 100 == 0) {

		if ((any/100)%4 == 0) traspas = true;

	} else {

		if (any % 4 == 0) traspas = true;
	}

	return traspas;
}

bool es_data_valida(int d, int m, int a) {

	bool valida = true;

	if (d <= 0) valida = false;
	if (m <= 0) valida = false;
	if (d <= 0) valida = false;
	if (d > 31) valida = false;
	if (m > 12) valida = false;

	if (m == 2 and d > 28) {
		if (es_any_de_traspas(a) and d <= 29) valida = true;
		else valida = false;
	}


	if (m == 4 and d > 30) valida = false;
	if (m == 6 and d > 30) valida = false;
	if (m == 9 and d > 30) valida = false;
	if (m == 11 and d > 30) valida = false;

	return valida;
}

int main() {

	int d, m, a;
	cin >> d >> m >> a;

	if (es_data_valida(d, m, a)) cout << "true";
	else cout << "false";

	cout << endl;
}