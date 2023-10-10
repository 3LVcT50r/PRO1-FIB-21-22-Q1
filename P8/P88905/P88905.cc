//The program computes a product of two matrices
//INPUT: Two matrices of integers
//OUTPUT: The product of the matrices

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

//The function reads a square matrix
//Pre: The size of the matrix has to be n*n with n bigger or equal of 0
//Post: returns a matrix
Matrix read_matrix() {

	int row, column;
	cin >> row >> column;

	Matrix M(row, vector<int>(column));

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cin >> M[i][j];
		}
	}

	return M;
}

//The function computes the product of two matrices
//Pre: Two matrices of integers with the dimensions of a*b the first one
// and b*c the second one with a and b bigger strict than 0
//Post: A square matrix
Matrix product(const Matrix &a, const Matrix &b) {

	//Sizes of the matrix
	int row = a.size();
	int column = b[0].size();

	//Number of iterations for each element of the matrix
	int iterations = b.size();

	Matrix M(row, vector<int>(column));

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {

			int element_matr = 0;

			for (int k = 0; k < iterations; ++k) {

				element_matr += a[i][k]*b[k][j];
			}

			M[i][j] = element_matr;
		}
	}

	return M;
}

//The function prints a matrix
//Pre: a matrix
//Post: the matrix printed
void print_matrix(const Matrix &M) {

	int row = M.size();
	int column = M[0].size();

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {

            int size_cmp = column - 1;
			if (j < size_cmp) cout << M[i][j] << ' ';
            else cout << M[i][j];
		}

		cout << endl;
	}
}

int main() {

	Matrix A = read_matrix();
	Matrix B = read_matrix();

	Matrix M = product(A, B);

	cout << "----------------------" << endl;

	print_matrix(M);
}