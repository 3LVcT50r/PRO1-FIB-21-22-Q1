//El programa te dice si dada una secuencia de palabras, si son positivas,
// negativas o neutras
//INPUT: una secuencia de: un entero n mayor que o igual que 0con n pares 
// de string
//OUTPUT: una tripleta de enteros mayores o iguales que 0

#include <iostream>
using namespace std;

int main() {

  int pos = 0;
  int neg = 0;
  int neu = 0;

  int n;
  cin >> n;
  while (n != 0) {

    string s1;
    string s2;

    int count_pos = 0;
    int count_neg = 0;

    for (int i = 0; i < n; ++i) {
      cin >> s1;
      cin >> s2;

      if (s1 == "si" and s2 != "si") ++count_pos;
      else if (s1 != "si" and s2 == "si") ++count_neg;
    }

    if (count_pos == count_neg) ++neu;
    else if (count_pos > count_neg) ++pos;
    else ++neg;

    cin >> n;
  }

  cout << pos << ' ' << neg << ' ' << neu << endl;
} 