#include "nota.hpp"

Nota::Nota():note(NULL), nr_note(0) {

}

Nota::Nota(const int *note, int nr_note):nr_note(nr_note) {
    this->note = new int[nr_note];
    for(int i = 0; i < nr_note; i++) {
        this->note[i] = note[i];
    }
}

// Nota::Nota(const Nota& obj) {
//     note = NULL;
//     *this = obj;
// }

Nota::~Nota() {
    delete[] note;
}

std::ostream& operator<<(std::ostream& out, const Nota&obj) {
    out << "Nr de note: ";
    out << obj.nr_note << "\n";
    out << "Notele: ";
    for(int i = 0; i < obj.nr_note; i++) {
        out << obj.note[i] << " "; 
    }
    return out;
}

Nota& Nota::operator=(const Nota &obj) {
    if(this->note != NULL) {
        delete[] this->note;
    }
    this->note = new int[obj.nr_note];
    nr_note = obj.nr_note;
    for(int i=0;i<nr_note;i++) {
		this->note[i]=obj.note[i];
    }
	return *this;

}

float Nota::get_medie() {
    float sum = 0;
    for(int i = 0; i < nr_note; i++) {
        sum = sum + note[i];
    }
    float media;
    media = sum / nr_note;
    return media;
}

// void Nota::interschimbare(Nota& obj1) {
//     Nota aux (*this);
//     *this = obj1;
//     obj1 = aux;
// }