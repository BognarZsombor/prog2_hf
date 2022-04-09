//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_TARGY_H
#define PROG2_HF_TARGY_H

#include <iostream>

class Targy {
    std::string nev;
    int ar;

public:
    Targy(const char * n, int a = 0) : nev(n), ar(a) {};

    std::string & get_nev() { return nev; }

    const std::string & get_nev() const { return nev; }

    int & get_ar() { return ar; }

    const int & get_ar() const { return ar; }
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, const Targy & rhs);

#endif //PROG2_HF_TARGY_H
