//El programa te dice el numero de tripletas nulas y el total de ellas dadas
// unas secuencias de enteros
//Una Tripleta nula es cuando dado 3 enteros, el entero central es igual a la
// suma de los otros enteros
//INPUT: Un entero mayor que 0 m con m secuencias empezadas con un entero 
// mayor o igual que dos n seguidos de n enteros
//OUTPUT: Un entero mayor o igual que 0 diciendo en numero de tripletas nulas
// por cada secuencia y al final, una string "Total :" con un entero que dice
// el total de tripletas que ha habido

#include <iostream>
using namespace std;

//La funcion te saca el total de triplas nulas
//Pre: un entero mayor o igual que 0 como contador y un entero mayor o igual
// que 2 para sa secuencia de enteros
//Post: un contador como entero mayor o igual que 0
void programa(int &count, int &sec_num) {

    int num1, num2;subli    
    cin >> num1 >> num2;

    int aux = sec_num - 2;
    //if (aux == 0) cout << 0 << endl;
    //else {
        for (int i = 0; i < aux; ++i) {

            int num3;
            cin >> num3;

            if (num1 + num3 == num2) ++count;
            num1 = num2;
            num2 = num3;
        }
        cout << count << endl;
    //}
}

int main() {

    int sec;
    cin >> sec;

    int tot_count = 0;
    for (int i = 0; i < sec; ++i) {

        int count = 0;

        int sec_num;
        cin >> sec_num;
        programa(count, sec_num);
        tot_count += count;
    }
    cout << "Total: " << tot_count << endl;
}