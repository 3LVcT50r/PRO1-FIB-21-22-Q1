//Calculate the factorial
//INPUT: An integer number
//OUTPUT: The factorial of the integer, that it's another integer

#include <iostream>
using namespace std;

//Calculate the factorial recursively
//Precondition: An integer bigger than 0 and smaller than 12
//Postcondition: The facotrial of the integer, that it's a ingeter

int factorial(int n) {

	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}

int main() {

	int n;
	cin >> n;

	cout << factorial(n) << endl;
}