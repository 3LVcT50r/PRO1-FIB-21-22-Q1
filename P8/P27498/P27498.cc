//The progran traspose a matrix
//INPUT: a matrix of integers
//OUTPUT: the matrix trasposed

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

//The function interchanges two values
//Pre: two integers
//Post: the integers swapped
void swap(int &a, int &b) {

	int c = a;
	a = b;
	b = c;
}

//The function traspose a square matrix
//Pre: a square matrix of integers
//Post: the matrix trasposed
void transpose(Matrix &m) {

	int n = m.size();

	for (int i = 0; i < n - 1; ++i) {
		for (int j = i + 1; j < n; ++j) {
			swap(m[i][j], m[j][i]);
		}
	}
}

//The function reads a matrix with its size
//Pre: -
//Post: returns the matrix
Matrix read_matrix() {

	int row;
	int column;
	cin >> row >> column;

	Matrix M(row, vector<int>(column));

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cin >> M[i][j];
		}
	}

	return M;
}

//Prints a square matrix
//Pre:
//Post:
void print_square_matrix(const Matrix &M) {

	int sizeM = M.size();

	for (int i = 0; i < sizeM; ++i) {
		for (int j = 0; j < sizeM; ++j) {
			cout << M[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {

	Matrix M = read_matrix();
	transpose(M);
	print_sqare_matrix(M);
}