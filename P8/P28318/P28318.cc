//The program reads a matrix and says the row, column and element
//INPUT: two integers that says the size of the matrix, then strings
// and integers
//OUTPUT: strings and their integer/s

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

//The function reads a matrix
//Pre: two naturals bigger than 0 that says the size and the integers of the
// matrix
//Post: store the matrix
Matriz read_matrix() {

	int row;
	int column;
	cin >> row >> column;

	vector<vector<int> > M(row, vector<int>(column));

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cin >> M[i][j];
		}
	}

	return M;
}

//Prints the string element and the element asignet
//Pre: string
//Post: the string and two integers
void print_element(const Matriz &M) {

	int element1, element2;
	cin >> element1 >> element2;

	cout << "element " << element1 << ' ' << element2;
	cout << ": " << M[element1 - 1][element2 - 1] << endl;
}

//Prints all the row of a matrix
//Pre: string
//Post: the string and a secuence of integers (integers of the row)
void print_row(const Matriz &M) {
	
	int row;
	cin >> row;

	cout << "row " << row << ':';

	int columnsM = M[0].size();

	for (int i = 0; i < columnsM; ++i) {
		cout << ' ' << M[row - 1][i];
	}
	cout << endl;
}

//Prints all the column of a matrix
//Pre: string
//post: the string and a secuence of integers (integers of the column)
void print_column(const Matriz &M) {

	int column;
	cin >> column;

	cout << "column " << column << ':';

	int rowsM = M.size();

	for (int i = 0; i < rowsM; ++i) {
		cout << ' '<< M[i][column - 1];
	}
	cout << endl;
}

int main() {

	Matriz M = read_matrix();

	string word;

	while (cin >> word) {
		if (word == "row") print_row(M);
		else if (word == "column") print_column(M);
		else print_element(M);
	}

}