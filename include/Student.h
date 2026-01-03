#pragma once
#include <string>

class Student {
public:
    int id;
    std::string name;
    std::string surname;

    Student(int id, const std::string& name, const std::string& surname);
};
