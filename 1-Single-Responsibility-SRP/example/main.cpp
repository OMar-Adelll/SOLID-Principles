#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define sz(x) (int)x.size()
#define nl '\n'

/*
    Single Responsibility Principle (SRP):
    each class should have one clear job and one reason to change.

    In this example:
    - student stores the student's data, such as name and marks.
    - GPA_CALCULATOR calculates the GPA from the student's marks.
    - PRINTER displays the student's information.

    Keeping these jobs separate makes the code easier to change.
    For example, changing the GPA formula should only affect GPA_CALCULATOR,
    not the student or PRINTER classes.
*/

#include "student.hpp"
#include "gpa.hpp"
#include "printer.hpp"

int main()
{
  GPA_CALCULATOR calculator;
  PRINTER printer;


  string name = "Ahmed";
  vector<int> marks = {10, 20, 20, 30, 15, 10};

  // Create a student object with the data above.
  student curr(name, marks);

  // Ask GPA_CALCULATOR to calculate the GPA instead of doing it in main.
  double GPA = calculator.gpa(curr);

  // Ask PRINTER to handle output instead of printing directly in main.
  printer.getInfo(name, GPA);


  return 0;
}
