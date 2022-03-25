//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_VASARLO_H
#define PROG2_HF_VASARLO_H

#include <iostream>

class Vasarlo {
    int id;
    std::string nev;
    int licit_ertek;

public:
    Vasarlo(std::string & n, int l = 0) : nev(n), licit_ertek(l) {};

    std::string & get_nev() { return nev; }

    const std::string & get_nev() const { return nev; }

    int & get_licit_ertek() { return licit_ertek; }

    const int & get_licit_ertek() const { return licit_ertek; }

    std::ostream & kiir(std::ostream & os);
};


#endif //PROG2_HF_VASARLO_H
