//The program verify if the integer is a perfect prime or not
//INPUT: An integer bigger or equal than 0
//OUTPUT: A boolean, true if it's perfect and false if not

#include <iostream>
using namespace std;
	
//Calculate de sumatory of all the digits of the number
//Precondition: the integer must be bigger than 0
//Postcondition: the sum of the integer must be an integer bigger than 0

int sum_digits(int n) {

	int sum = 0;
	if (x < 10) sum = x;
	else sum = (x % 10) + sum_digits(x / 10);
	return sum; 
}