//Entrada: El tiempo en segundo
//Salida: La descomposicion del tiempo en horas, minutos y segundos

#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {

	//IN: un entero mayor que 0
	//OUT: La variables de horas, minutos y segundos

	h = n / 3600;
	m = (n % 3600) / 60;
	s = (n % 3600) % 60;
}

int main() {

	int n, h, m, s;
	cin >> n;

	descompon(n, h, m, s);

	cout << h << ' ' << h << ' ' << s << endl;
}