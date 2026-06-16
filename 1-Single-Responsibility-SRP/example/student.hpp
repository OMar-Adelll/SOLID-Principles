#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <vector>

// The only reason of this class is init new student with student's metadata (name, marks)

class student
{
private:
    std::string name;
    std::vector<int> marks;

public:
    student() = default;

    student(std::string name, std::vector<int> &marks)
    {
        this->name = name;
        this->marks = marks;
    }

    std::string getName()
    {
        return this->name;
    }

    std::vector<int> getMarks()
    {
        return this->marks;
    }
};

#endif