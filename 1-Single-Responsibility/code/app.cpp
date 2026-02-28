#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    The main idea of the single responsibility principle is that a class should have only one reason to change.
    In this example, we have a student class that has only one responsibility, which is to store the student's information.
    We also have a GPA_Calculator class that has only one responsibility, which is to calculate the student's GPA.
    Finally, we have a student_printer class that has only one responsibility, which is to print the student's information.
*/

class student {
public:
  string name;
  vector<int> marks;
};

class GPA_Calculator {
public:
  double clac_GPA(const student &x) {
    double sum = 0.0;
    for (auto &c : x.marks)
      sum += c;
    return sum / sz(x.marks);
  }
};

class student_printer {
public:
    void info(const student &x, double GPA)
    {
        cout << "Name : " << x.name << nl;
        cout << "GPA : " << GPA << nl;
    }
};

int main() {

    student s;
    s.name = "Omar";
    s.marks = {100, 90, 80};
    
    GPA_Calculator gpa_calc;
    student_printer printer;
    
    double gpa = gpa_calc.clac_GPA(s);
    printer.info(s, gpa);
    
  return 0;
}