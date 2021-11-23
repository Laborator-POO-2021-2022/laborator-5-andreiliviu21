#ifndef CLASA_HPP
#define CLASA_HPP

#include <iostream>
#include <cstring>


class Clasa {

protected:
    int nr_elevi;
public:
    Clasa();
    Clasa(int);
    Clasa(const Clasa&);
    ~Clasa();
    Clasa& operator=(const Clasa&);
    friend std::ostream& operator<<(std::ostream&, const Clasa&);
    // void interschimbare2(Clasa&);


};

#endif