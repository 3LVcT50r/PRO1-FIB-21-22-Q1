#include <iostream>
using namespace std;

int suma_p(int p, int total) {

    int sells;
    cin >> sells;

    if (sells == -1) {
        return total;
    } else {
        if (p >= 0) {
            return sells + suma_p(--p, total);
        }
    }

}

int main() {

    int p;
    int total = 0;

    cin >> p;

    total = suma_p(p, total);

    cout << total << endl;
}