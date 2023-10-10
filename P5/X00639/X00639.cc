//Entrada: 4 enteros que forman dos fracciones
//Salida: booleano diciendote si la primera fraccion es menor estricto que
// la segunda

#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {

	//IN: 4 enteros (con el 2º y el 4º mayores estricos que 0)
	//OUT: booleano diciendo si la primera fraccion es menor que la segunda

	//Denominador en comun
	int dem_comun = d1*d2;

	n1 = dem_comun/d1*n1;
	n2 = dem_comun/d2*n2;

	//Booleano falso si el segundo es menor que el primero
	bool menor = false;

	if (n1 < n2) menor = true;

	return menor;
}

int main() {

	int n1, d1, n2, d2;
	cin >> n1 >> d1 >> n2 >> d2;

	if (c_frac(n1, d1, n2, d2)) cout << "si";
	else cout << "no";

	cout << endl;
}