//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_ARVERES_H
#define PROG2_HF_ARVERES_H

#include <iostream>
#include "Targy.h"
#include "Vasarlo.h"
#include "VasarloLista.h"

struct Licit {
    Vasarlo licitalo;
    int licit;

    Licit() : licit(0) { };
};

class Arveres {
    std::string szervezo;
    Targy targy;
    VasarloLista vasarlok;
    Licit akt_licit;

    Arveres(const Arveres &);

    Arveres& operator=(const Arveres & rhs);

public:
    Arveres(const char * _szervezo, const Targy & _targy)
        : szervezo(_szervezo), targy(_targy), vasarlok(NULL) { };

    std::string & get_szervezo() { return szervezo; }

    const std::string & get_szervezo() const { return szervezo; }

    Targy & get_targy() { return targy; }

    const Targy & get_targy() const { return targy; }

    Licit & get_akt_licit() { return akt_licit; }

    const Licit & get_akt_licit() const { return akt_licit; }

    VasarloLista & get_vasarlok() { return vasarlok; }

    const VasarloLista & get_vasarlok() const { return vasarlok; }

    void hozzaad(const char * vasarlo_nev);

    void torol(const char * vasarlo_nev);

    bool uj_licit();
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, Arveres & rhs);

#endif //PROG2_HF_ARVERES_H
