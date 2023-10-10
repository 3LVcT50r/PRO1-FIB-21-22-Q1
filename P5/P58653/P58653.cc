//Entrada: Un caracter
//Salida: Si el caracter es una letra? una vocal? un consonante? mayuscula?
// minuscula? o un digito

#include <iostream>
#include <string>
using namespace std;

void escriu_linia(char c, string s, bool b) {

    //IN: un caracter cualquiera, un string y un booleano
    //OUT: el string dicho, el caracter en parentesis y con doble comillas
    // y un string de "cert" o "fals" dependiendo del booleano

    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {

	//Caracter como letra, numero o signo de puntuacion
	char caracter;
	cin >> caracter;

	//Calculo si es un numero
	if ('0' <= caracter and caracter <= '9') {
		escriu_linia(caracter, "lletra", false);
		escriu_linia(caracter, "vocal", false);
		escriu_linia(caracter, "consonant", false);
		escriu_linia(caracter, "majuscula", false);
		escriu_linia(caracter, "minuscula", false);
		escriu_linia(caracter, "digit", true);
	} 

	//Calculo si es una letra
	else if (('A' <= caracter and caracter <= 'Z') or ('a' <= caracter and caracter <= 'z')) {
		escriu_linia(caracter, "lletra", true);
		
		//Booleano para decir si son vocales o consonantes
		bool vocal_mayus = (caracter == 'A' or caracter == 'E' or caracter == 'I' or caracter == 'O' or caracter == 'U');
		bool vocal_minus = (caracter == 'a' or caracter == 'e' or caracter == 'i' or caracter == 'o' or caracter == 'u');

		if (vocal_mayus	or vocal_minus) {
			escriu_linia(caracter, "vocal", true);
			escriu_linia(caracter, "consonant", false);
		} else {
			escriu_linia(caracter, "vocal", false);
			escriu_linia(caracter, "consonant", true);
		}

		if ('A' <= caracter and caracter <= 'Z') {
			escriu_linia(caracter, "majuscula", true);
			escriu_linia(caracter, "minuscula", false);
		} else {
			escriu_linia(caracter, "majuscula", false);
			escriu_linia(caracter, "minuscula", true);
		}

		escriu_linia(caracter, "digit", false);
	} else {
		escriu_linia(caracter, "lletra", false);
		escriu_linia(caracter, "vocal", false);
		escriu_linia(caracter, "consonant", false);
		escriu_linia(caracter, "majuscula", false);
		escriu_linia(caracter, "minuscula", false);
		escriu_linia(caracter, "digit", false);
	}
}