#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "nota.hpp"
#include "diriginte.hpp"
#include "clasa.hpp"

class Student: public Nota, public Diriginte, public Clasa {
    char *nume;

public:
    Student();
    Student(const int*, int, const char*, const char[], int, const char*);
    Student(const Student&);
    ~Student();
    Student& operator=(const Student&);
    friend std::ostream& operator<<(std::ostream&, const Student&);
    void interschimbare3(Student&);


};

#endif