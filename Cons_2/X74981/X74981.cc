//El programa encuentra el punto de equilibrio (si lo hay) en una secuencia de
// enteros.
//INPUT: Un entero mayor que 0 que define la secuencia, y una secuencia de
// enteros
//OUTPUT: Un entero mayor o igual que 1 que dice la posicion del punto
// de equilibrio, y -1 si no existe tal punto

#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {

    vector<int> v(n);

    for (int i = 0; i < n; ++i) cin >> v[i];

    return v;
}

void punto_equilibrio(const vector<int> &v, bool &condicion, int &count) {

    int sizev = v.size();

    while (not condicion and count < sizev) {

        int a = 0;
        int b = 0;

        for (int i = 0; i < count; ++i) a += v[i];
        for (int i = count; i < sizev; ++i) b += v[i];

        if (a == b) condicion = true;
        ++count;
    }    
}

int main() {

    int sec_num;
    cin >> sec_num;

    vector<int> v = read_vector(sec_num);

    int count = 0;
    bool condicion = false;

    punto_equilibrio(v, condicion, count);

    if (condicion) cout << count << endl;
    else cout << "-1" << endl;    
}