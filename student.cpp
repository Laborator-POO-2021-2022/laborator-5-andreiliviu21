#include "student.hpp"

Student::Student():Nota(), Diriginte(), Clasa(), nume(NULL) {

}

Student::Student(const int* note, int nr_note, const char* nume_diriginte, const char grupa[], int nr_elevi, const char* nume): Nota(note, nr_note), Diriginte(nume_diriginte, grupa), Clasa(nr_elevi) {
    this->Student::nume = new char[strlen(nume) + 1];
    strcpy(this->Student::nume, nume);
    // this->nume = new char[strlen(nume) + 1];
    // strcpy(this->nume, nume);

}

Student::Student(const Student& obj) {
    nume = NULL;
    *this = obj;
}

Student::~Student() {
    delete[] nume;
    
}

Student& Student::operator=(const Student& obj) {
    Nota::operator=(obj);
    Diriginte::operator=(obj);
    Clasa::operator=(obj);
    if (nume != NULL) {
        delete[] nume;
    }
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);

    

return *this;
}

std::ostream& operator<<(std::ostream& out, const Student& obj)
{
	out << (const Nota&) obj;
	out << (const Diriginte&) obj;
	out << (const Clasa&) obj;
    if(obj.nume != NULL) {
        out << "\nNume: " << obj.nume <<'\n' << '\n' ;
    }
	
	
	return out;
}

void Student::interschimbare3(Student& obj1) {
    Student aux (*this);
    *this = obj1;
    obj1 = aux;
}