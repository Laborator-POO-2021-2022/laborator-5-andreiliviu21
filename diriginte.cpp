#include "diriginte.hpp"

Diriginte::Diriginte():nume(NULL) {
	strcpy(this->grupa," ");
}

Diriginte::Diriginte(const char* nume, const char grupa[])
{
	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	strcpy(this->grupa,grupa);
}

Diriginte::Diriginte(const Diriginte& obj){
	Diriginte::nume = NULL;
	*this = obj;
}

Diriginte::~Diriginte()
{
	delete []nume;
}

Diriginte& Diriginte::operator=(const Diriginte& obj){
	if (nume != NULL) {
		delete []nume;
    }
	nume = new char[strlen(obj.nume) + 1];
	strcpy(nume,obj.nume);
	strcpy(grupa,obj.grupa);
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Diriginte& obj) {
	out << '\n';
    if(obj.nume != NULL) {
		out << "Numele dirigintelui: " << obj.nume;
    } else {
		out << "Numele dirigintelui: " << "no name found x_x";
    }
	
	out << "\nGrupa: " << obj.grupa<< " ";
    out << '\n';
	return out;
}

void Diriginte::name_change(const char* x) {
	this->nume=new char[strlen(x) + 1];
	strcpy(this->nume, x);
}

// void Diriginte::interschimbare1(Diriginte& obj1) {
//     Diriginte aux (*this);
//     *this = obj1;
//     obj1 = aux;
// }