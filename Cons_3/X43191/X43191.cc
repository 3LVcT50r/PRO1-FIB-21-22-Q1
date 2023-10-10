#include <iostream>
#include <cmath>
using namespace std;

// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base. 
//       returns false otherwise.
bool is_power(int n, int base) {
  if (base == 1 or base == 0) return true;
  if (n == 0) return false;
  else if (n == 1) return true;
  else if (n%base != 0) return false;
  else return is_power(n/base, base);
}

int main() {
  int n, n1, c = 0;
  while (cin >> n) {
    c = 0;
    while (cin >> n1 and n1 != 0) {
      bool found = false;
      if (n == 1 or n1 == 1) {
        ++c;
        found = true;
      }
      for (int i = 2; i <= min(n,n1) and not found; ++i) {
        if (is_power(n,i) and is_power(n1,i)) {
          ++c;
          found = true;
        }
      }
      n = n1;
    }
    cout << c << endl;
  }
}