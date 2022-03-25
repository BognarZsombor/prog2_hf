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
    Targy(std::string& n, int a = 0) : nev(n), ar(a) {};

    std::string & get_nev() { return nev; }

    const std::string & get_nev() const { return nev; }

    int & get_licit_ertek() { return ar; }

    const int & get_licit_ertek() const { return ar; }

    std::ostream & kiir(std::ostream & os);
};


#endif //PROG2_HF_TARGY_H
