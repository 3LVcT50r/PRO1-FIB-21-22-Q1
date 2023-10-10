//Entrada: tres enteros
//Salida: la suma del entero mas grande y el entero mas pequeño

#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {

	int max = x;

	if (max > y) max = y;
	if (max > z) max = z;

	int min = x;

	if (min < y) min = y;
	if (min < z) min = z;

	return max + min;
}

int main() {
	int x, y, z;

	cin >> x >> y >> z;

	cout << sum_min_max(x, y, z) << endl;
}