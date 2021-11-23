#include "clasa.hpp"

Clasa::Clasa(): nr_elevi(0) {

}

Clasa::Clasa(int nr_elevi): nr_elevi(nr_elevi) {

}

Clasa::Clasa(const Clasa& obj) {
    *this = obj;
}

Clasa::~Clasa() {

}

Clasa& Clasa::operator=(const Clasa& obj) {
    this->nr_elevi = obj.nr_elevi;
    return *this;
}

std::ostream& operator <<(std::ostream& out, const Clasa& obj) {
    out << "Nr elevi din grupa: " << obj.nr_elevi;
    return out;
}

// void Clasa::interschimbare2(Clasa& obj1) {
//     Clasa aux (*this);
//     *this = obj1;
//     obj1 = aux;
// }