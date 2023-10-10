//The program tells how many integers are equal to the last one
//INPUT: a integer that says the amount of integers of a secuence
//OUTPUT: an integer that says the amound of numbers that's equal as the
// last one

#include <iostream>
#include <vector>
using namespace std;

int main() {

	//Integer bigger than 0 - number of the secuence
	int num;
	cin >> num;

	//Vector of integers to store the secuence
	vector<int> SEC(num);

	for (int i = 0; i < num; ++i) {
		cin >> SEC[i];
	}

	int last_int = SEC[num - 1];
	int count = 0;

	for (int i = 0; i < num - 1; ++i) {
		if (SEC[i] == last_int) ++count;
	}

	cout << count << endl;
}