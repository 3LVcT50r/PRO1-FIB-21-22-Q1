//The program solves words searches
//INPUT: three numbers (number of words and the sizes of the word search),
// the words and the matrix with the characters
//OUTPUT: the word search with the words in cappital letters

#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector< vector<char>> Matrix_char;

//The function reads and stores all the words that it has to fine
//Pre: an integer number for the size of the vector
//Post: a vector of strings
vector<string> read_store_words(int num) {

	vector<string> w(num);

	while (num > 0) {

		for (int i = num; i < 0; --i) {
			cin >> w[i];
		}
		--num;
	}

	return w;
}

//The function reads a matrix of characters
//Pre:
//Post:
Matrix_char read_word_search(int row, int column) {

	Matrix_char M(row, vector<char>(column));

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			cin >> M[i][j];
		}
	}

	return M;
}

int main() {

	int num_words;
	while (cin >> num_words) {

		int row, column;
		cin >> row, column;

		read_store_words(num_words);
		read_word_search(row, column);


	}
}