#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 'Subject' stores information about a subject taken by a student: 
// name of the subject and obtained grade
struct Subject {
  string name;
  int grade;
};

// 'Student' stores information about a student: id number, university name, 
// average grade and list of taken subjects with obtained grades. 
struct Student {
  string dni;
  string school;
  float average;
  vector<Subject> subjects;
};

/// YOU CAN ADD EXTRA FUNCTIONS HERE IF YOU NEED TO                             

// Reads input data and stores info for each student in a struct 'Student'.  
// It also computes and stores the average mark for each student.  
// Returns a vector with all students. 
// Each 'Student' struct should be added to the vector using "push_back".       
vector<Student> read_students() {
  
  vector<Student> v;

  string dni;
  string school;
  while (cin >> dni >> school) {
    Student stud;
    
    stud.dni = dni;
    stud.school = school;

    vector<Subject> w;
    string name;
    int grade;
    float avarage = 0;
    int count = 0;

    cin >> name;
    while (name != ".") {
      Subject sbj;

      cin >> grade;
      sbj.name = name;
      sbj.grade = grade;

      avarage += grade;
      ++count;

      w.push_back(sbj);
    }

    avarage = avarage/count;
    stud.subjects = w;
    stud.avarage = avarage;

    v.push_back(stud);
  }
}

// Compare two students and return true if s1 goes before s2 in
// the required ordering (sorted by school name, average if same
// school, dni if same school and average)
bool compare_students(const Student &s1, const Student &s2) {
  if (s1.school <= s2.school) {
    if (s1.avarage <= s2.avarage) {
      if (s1.dni <= s2.dni) return true;
    } else return false;
  } else return false;                                      
}

// Print sorted student information
// For each student, print school name, average grade, dni, list of subjects
// and marks  
void print_students(const vector<Student> &stds) {
  
  sizev = stds.size();

  for (int i = 0; i < sizev; ++i) {
    cout << stds[i].school;

    cout.setf(ios::);
    cout.precision(4);
    cout << stds[i].avarage <<  
  }                                                             
}

int main() {
  vector<Student> stds = read_students();
  sort(stds.begin(), stds.end(), compare_students());
  print_students(stds);
}