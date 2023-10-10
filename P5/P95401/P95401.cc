//Entrada: un año entero
//Salida: si es un año bisiesto o no

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

int main() {

	int any;
	cin >> any;

	if (es_any_de_traspas(any)) cout << "SI" << endl;
	else cout << "NO" << endl;
}