#ifndef GPA_HPP
#define GPA_HPP

#include <string>
#include "student.hpp"

class GPA_CALCULATOR
{
public:
    double gpa(student curr)
    {
        double total = 0.0;
        std::vector<int> marks = curr.getMarks();

        for (auto &course : marks)
            total += course;

        return (double)total / (double)marks.size();
    }
};

#endif