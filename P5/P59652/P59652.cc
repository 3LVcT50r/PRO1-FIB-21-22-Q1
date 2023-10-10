//Entrada: dos numeros enteros de forma que hagan una fraccion
//Salida: la fraccion simplificada

#include <iostream>
using namespace std;

int mcd(int a, int b) {

	//IN: dos enteros mayores que 0
	//OUT: el maximo comun divisor

	while (b != 0) {

		int r = a%b;

		a = b;
		b = r;
	}

	return a;
}

void read_rational(int& num, int& den) {

	//IN: dos enteros mayores que 0 y menores que 10⁹
	//OUT: la fraccion irreducible

	char x;
	cin >> num >> x >> den;

	int factor_comun = mcd(num, den);

	num /= factor_comun;
	den /= factor_comun;
}

int main() {

	int num, den;

	read_rational(num, den);

	cout << num << '/' << den << endl;
}
