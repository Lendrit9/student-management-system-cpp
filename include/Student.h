#pragma once
#include <string>

class Student {
private:
    int id;
    std::string name;
    std::string surname;

public:
    // Konstruktori
    Student(int id, std::string name, std::string surname) 
        : id(id), name(name), surname(surname) {}

    // Metodat Getter (për të marrë të dhënat)
    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getSurname() const { return surname; }
};