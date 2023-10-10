//Entrada: dos valores
//Salida: los dos valores puestos al revés.

#include <iostream>
using namespace std;

void swap2(int& a, int& b) {

	int a2 = a;
	a = b;
	b = a2;
}

int main() {

	int a, b;

	cin >> a >> b;

	swap2(a, b);

	cout << a << ' ' << b << endl;
}