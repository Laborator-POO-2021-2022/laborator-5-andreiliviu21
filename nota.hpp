#ifndef NOTA_HPP
#define NOTA_HPP

#include <iostream>
#include <cstring>


class Nota {
protected:
    int *note;
    int nr_note;
public:
    Nota();
    Nota(const int*, int);
    ~Nota();
    friend std::ostream& operator<<(std::ostream&, const Nota&);
    Nota& operator=(const Nota&);
    float get_medie();
    // void interschimbare(Nota&);
};

#endif