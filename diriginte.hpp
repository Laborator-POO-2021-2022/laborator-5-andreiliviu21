#ifndef DIRIGINTE_HPP
#define DIRIGINTE_HPP

#include <iostream>
#include <cstring>


class Diriginte {
protected:
    char *nume;
    char grupa[7];

public:
    Diriginte();
    Diriginte(const char*, const char[]);
    Diriginte(const Diriginte&);
    ~Diriginte();
    Diriginte& operator=(const Diriginte&);
    friend std::ostream& operator<<(std::ostream&, const Diriginte&);
    void name_change(const char*);
    // void interschimbare1(Diriginte&);
};

#endif