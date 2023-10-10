#include <iostream>
#include <vector>
using namespace std;

struct HOLA {

  string ola;
  string hola;
};

int main() {

  HOLA ula;

  string yola;
  cin >> yola;
  ula.hola = yola;

  cout << ula.hola[0] << endl;
}