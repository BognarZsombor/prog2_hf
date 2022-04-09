//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_VASARLO_H
#define PROG2_HF_VASARLO_H

#include <iostream>

class Vasarlo {
    std::string nev;
    int licit_ertek;

public:
    Vasarlo() : licit_ertek(0) {};

    explicit Vasarlo(const char * n, int l = 0) : nev(n), licit_ertek(l) {};

    std::string & get_nev() { return nev; }

    const std::string & get_nev() const { return nev; }

    int & get_licit_ertek() { return licit_ertek; }

    const int & get_licit_ertek() const { return licit_ertek; }

    bool operator==(const Vasarlo & rhs) { return nev == rhs.nev; }

    bool operator==(const char * rhs) { return nev == rhs; }

    bool operator!=(const Vasarlo & rhs) { return nev != rhs.nev; }

    bool operator!=(const char * rhs) { return nev != rhs; }
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, const Vasarlo & rhs);

#endif //PROG2_HF_VASARLO_H
