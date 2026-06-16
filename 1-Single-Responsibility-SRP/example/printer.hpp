#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <string>
#include <iostream>
#include "student.hpp"

class PRINTER
{
public:
    void getInfo(std::string &name, const double &GPA)
    {
        std::cout << "student name is : " << name << '\n';
        std::cout << "student GPA = " << GPA << '\n';
    }
};

#endif