//El programa te ordena la nota optenida por alumnos dados unas respuestas
//INPUT: un entero m, seguido de m enteros entre el 0 y el 4, seguido de un
// entero

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};

vector<int> read_right_answers(int m) {
  vector<int> answer(m);

  for (int i = 0; i < m; ++i) cin >> answer[i];

  return answer;  
}

vector<Student> get_info_test(const vector<int> &answer, int n) {
  vector<Student> v(n);

  for (int i = 0; i < n; ++i) {
    Student stud;

    string name;
    cin >> name;
    stud.name = name;

    int sizea = answer.size();

    int right = 0;
    int wrong = 0;

    for (int j = 0; j < sizea; ++j) {
      int resposta;
      cin >> resposta;
      if (resposta != 0) {
        if (resposta == answer[j]) ++right;
        else ++wrong;
      }
    }
    stud.right = right;
    stud.wrong = wrong;

    v[i] = stud;
  }

  return v;
}

int calcul_nota(const Student &stud) {
  return (stud.right)*2 - stud.wrong;
}

bool cmp(const Student &std1, const Student &std2) {

  if (calcul_nota(std1) == calcul_nota(std2) and (std1.wrong == std2.wrong)) return std1.name < std2.name;
  else if (calcul_nota(std1) == calcul_nota(std2)) return std1.wrong < std2.wrong;
  else return calcul_nota(std2) < calcul_nota(std1);
}

void write_results(const vector<Student> &v) {

  int sizev = v.size();

  for (int i = 0; i < sizev; ++i) {
    cout << v[i].name << ' ' << v[i].right << ' ' << v[i].wrong << endl;
  }
}

int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answers(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}