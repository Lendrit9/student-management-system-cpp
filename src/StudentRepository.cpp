#include "StudentRepository.h"

// Implementimi i funksionit për shtimin e studentit
void StudentRepository::addStudent(const Student& student) {
    // Metoda push_back shton elementin e ri në memorien e vektorit
    students.push_back(student);
}

// Implementimi i funksionit për të listuar studentët
std::vector<Student> StudentRepository::getAllStudents() const {
    // Thjesht kthejmë vektorin 'students' që kemi në private
    return students;
}