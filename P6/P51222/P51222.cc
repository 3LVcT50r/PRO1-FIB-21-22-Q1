//Calculate the number of digits of a natural numbre
//INPUT: An integer number
//OUTPUT: An integer number, the number of digits

#include <iostream>
using namespace std;

//Calculate the number of digits
//Precondition: An integer number bigger or equal of 0
//Postcondition: An integer smaller or equal than the input
int number_of_digits(int n) {

	if (n < 10) return 1;
	else {
		return 1 + number_of_digits(n / 10);
	}
}

int main() {

	int n; 
	cin >> n;

	cout << number_of_digits(n) << endl;
}