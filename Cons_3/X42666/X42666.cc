#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Info {
    string name;
    int targets;
    int aproxs;
    int fails;
    int points;
};


vector<Info> Player(int n, int k) {

  vector<Info> v(n);

  for (int i = 0; i < n; ++i) {
    Info inf;
    cin >> inf.name >> inf.targets >> inf.aproxs;

    inf.fails = k - (inf.targets + inf.aproxs);
    inf.points = inf.targets*3 + inf.aproxs;

    v[i] = inf;
  }

  return v;
}

bool compare_player(const Info &player1, const Info &player2) {
  if (player1.points == player2.points and player1.fails == player2.fails) return player1.name < player2.name;
  else if (player1.points == player2.points) return player1.fails < player2.fails;
  else return player2.points < player1.points;
}

void print_player(const vector<Info> &v) {

  int size = v.size();
  for (int i = 0; i < size; ++i) {
    cout << v[i].name << ' ' << v[i].points << ' ' << v[i].fails << endl;
  }
}

int main() {

  int n;
  int k;
  cin >> n >> k;
  vector<Info> v = Player(n, k);
  sort(v.begin(), v.end(), compare_player);
  print_player(v);
}