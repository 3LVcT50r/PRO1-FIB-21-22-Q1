//El programa lee y te dice las palabras sin repetirlas
//INPUT: una secuencia de secuencias de palabras definidas por un natural
//OUTPUT: las palabras de cada secuencia sin repeticiones

#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<string> Vector;

//La funcion lee un vector con tamaño definido por un entero ya dicho
//Pre: un entero mayor o igual que 1
//Post: un vector de strings con tamaño del entero
Vector read_vector(int n) {

    Vector V(n);

	for (int i = 0; i < n; ++i) {
		cin >> V[i];
	}
	return V;
}

//La funcion explulsa las palabras sin repetirlas
//Pre: un vector de strings
//Post: expulsiones de las diferentes palabras sin repeticiones
void non_repetition_word(const Vector &V) {

	int iterations = V.size();

	cout << V[0] << endl;

	for (int i = 1; i < iterations; ++i) {

        bool condicion = true;
        int j = i - 1;
        hile (condicion and j >= 0) {

			if (V[j] == V[i]) condicion = false;

			--j;
		}

		if (condicion) cout << V[i] << endl;
	}
}

int main() {

	//Entero mayor o igual que cero que define el numero de palabras por
	// secuencia
	int sec;

	while (cin >> sec) {

		Vector V = read_vector(sec);
		non_repetition_word(V);
		cout << endl;
	}
}
