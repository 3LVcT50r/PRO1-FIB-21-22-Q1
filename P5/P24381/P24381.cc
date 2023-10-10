//Entrada: un numero natural y un caracter
//Salida: una cruz de tamaño del natural de entrada y dibujado con el caracter
// de entrada

#include <iostream>
using namespace std;

void cross(int n, char c) {

	//IN: un natural mayor que 3 senar y un caracter
	//OUT: EL dibujo de una cruz de tamaño del real con el caracter

	for (int i = 0; i < n; ++i) {
		if (i == (n/2)) for (int j = 0; j < n; ++j) cout << c;
		else {
			for (int j = 0; j < (n/2); ++j) cout << ' ';
			cout << c;
		}
		cout << endl;
	}
}

int main () {

	int n;
	char c;

	cin >> n >> c;

	cross(n, c);
}