#include <iostream>
#include <vector>
using namespace std;

struct Player {
  string name;
  double score;     // mitjana anotadora
};

struct Team {
  string tname;
  Player mvp;       // jugador millor valorat
};

typedef vector<Team> League;

League read_data() {

  int size;
  cin >> size;

  League v(size);

  for (int i = 0; i < size; ++i) {

    Team tm;

    string tm_name;
    cin >> tm_name;
    tm.tname = tm_name;

    Player plyr;

    string name;
    cin >> name;
    plyr.name = name;

    double mark;
    cin >> mark;
    plyr.score = mark;

    tm.mvp = plyr;

    v[i] = tm;
  }

  return v;
}

int main() {

  League v = read_data();

  char c;
  double s;
  while (cin >> c >> s) {

    cout << "-- begin query" << endl;

    int size = v.size();
    for (int i = 0; i < size; ++i) {

      if (v[i].tname[0] == c and v[i].mvp.score > s) cout << v[i].mvp.name << endl;       
    }

    cout << "-- end query" << endl;
  }  
}