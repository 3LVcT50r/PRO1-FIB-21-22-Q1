//El programa determina, en una secuencia de naturales, la cadena mas larga
// de mismos numeros y decir su posicion en la secuencia y lo largo que es la
// cadena
//INPUT: un natural n con n secuencias acabadas con un centinela
//OUTPUT: La posicion de la caneda y lo largo que es

#include <iostream>
using namespace std;

void seq(int &maxpos, int &maxlength) {

	int x, x1;
	cin >> x;

	int position = 1;
	int length = 1;

	while (x != -1) {

		cin >> x1;
		if (x == x1) {
			++length;
		} else {

			if (maxlength < length) {
				maxlength = length;
				maxpos = position;
			}

			position = position + length;
			length = 1;
		}
		x = x1;
	}
}

int main() {

	//Entero mayor o igual a 0 que determina el numero de secuencias
	int num_sec;
	cin >> num_sec;

	for (int i = num_sec; i > 0; --i) {

		int maxpos = 0;
		int maxlength = 0;
		seq(maxpos, maxlength);

		cout << maxpos << ' ' << maxlength << endl;
	}

}