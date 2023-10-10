//El programa te dice la cantidad de baldosas sucias que ha limpiado el robot
// la posicion de las baldosas limpias
//INPUT: dos enteros mayores que 0 y una matriz de enteros de esas 
// dimensiones
//OUTPUT: las cordenadas del donde no hay suciedad y la cantidad de suciedad
// que ha encontrado el robot en esa columna

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
 
//La funcion lee una matriz a partir de las dimensiones
//Pre: dos enteros mayores que 0
//Post: Una matriz de enteros con las dimensiones dadas en el input
Matrix read_matrix(int row, int column) {

  Matrix M(row, vector<int>(column));

  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < column; ++j) cin >> M[i][j];
  }
  
  return M;
}

int main() {
  
  //Enteros mayores que 0 que dicen las dimensiones de la matriz
  int row;
  int column;
  cin >> row >> column;
  Matrix M = read_matrix(row, column);
  int count = 0;

  for (int j = 0; j < column; ++j) {

    //
    if (j%2 == 0) {
      for (int i = 0; i < row; ++i) {

        if (M[i][j] == 0) cout << i << ' ' << j << endl;
        else count += M[i][j];
      }
    } 
    else {
      for (int i = row - 1; i >= 0; --i) {
        if (M[i][j] == 0) cout << i << ' ' << j << endl;
        else count += M[i][j];
      } 
    } 
    cout << "Total en columna " << j << ": " << count << endl;
  }
}