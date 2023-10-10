//La función te dice si dos partes de enteros son three sorted
//INPUT: una secuencia de pares de enteros
//OUTPUT: "yes" si lo son, "no" si no lo son

#include <iostream>
using namespace std;

// Pre: a > 0 and b > 0
// Post: returns true when  pair (a, b) is three-sorted
//      returns false otherwise
bool is_three_sorted(int a, int b) {

	if (a % 3 == 0) {
		if (b % 3 == 0) {

			a /= 3;
			b /= 3;

			return is_three_sorted(a, b);
		} else return true;
	} else {
		
		if (b % 3 != 0) return true;
		else return false;
	}
}

int main() {

	int a = 0;
	int b = 0;

	while (cin >> a >> b){

		if (is_three_sorted(a, b)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}