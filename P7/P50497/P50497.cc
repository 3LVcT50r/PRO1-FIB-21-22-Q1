//The program proofs if s is a palindrome or not.
//INPUT: a string
//OUTPUT: a boolean

#include <iostream>
#include <string>
using namespace std;

//Proofs if the string s is a palindrome
//Precondition: a string
//Postcondition: a boolean
bool is_palindrome(const string &s) {

	int length_s = s.length();
	bool palindrome = true;

	int i = 0;
	while (palindrome and i < length_s/2) {
		if (s[i] != s[length_s - 1 - i]) palindrome = false;
		++i;
	}

	return palindrome;
}

int main() {

	string word;
	cin >> word;

	if (is_palindrome(word)) cout << "true" << endl;
	else cout << "false" << endl;
}