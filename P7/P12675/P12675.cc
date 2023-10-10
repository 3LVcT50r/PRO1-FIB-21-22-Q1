//The program tells the amonunt of common elements in both vectors
//INPUT: integers in two vectors
//OUTPUT: an integer that tells the amount of common elements

#include <iostream>
#include <vector>
using namespace std;

//Tells the common elements
//Precondition: integers in order from smaller to bigger
//Postcondition: the integer bigger than 0
int common_elements(const vector<int> &X, const vector<int> &Y) {

	int i = 0;
	int j = 0;
	int count = 0;

	int size_x = X.size();
	int size_y = Y.size();

	while ((i < size_x) and (j < size_y)) {

		if (X[i] == Y[j]) {
			++count;
			++i;
			++j;
		}
		else {
			if (X[i] < Y[j]) ++i;
			else ++j;
		}
	}

	return count;
}

void read_data2(vector<int> &V) {
	int sizeV = V.size();
	for (int i = 0; i < sizeV; ++i) {
		int aux;
		cin >> aunx;
		V[i] = aux;
	}
}

int main() {

}