#ifndef STUDENTREPOSITORY_H
#define STUDENTREPOSITORY_H

#include <vector>
#include "Student.h" // Nevojitet për të njohur tipin e të dhënave Student

class StudentRepository {
private:
    // Përdorim std::vector si një listë dinamike për të ruajtur studentët
    std::vector<Student> students; 

public:
    // Shton një objekt Student në fund të vektorit
    void addStudent(const Student& student);

    // Kthen një kopje të listës me të gjithë studentët e regjistruar
    std::vector<Student> getAllStudents() const;
};

#endif