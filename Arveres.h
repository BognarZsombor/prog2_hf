//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_ARVERES_H
#define PROG2_HF_ARVERES_H

#include <iostream>
#include "Targy.h"
#include "Vasarlo.h"
#include "VasarloLista.h"

class Arveres {
    std::string szervezo;
    Targy targy;
    VasarloLista vasarlok;
    int akt_licit;

public:
    Arveres(const Arveres &) = delete;

    Arveres& operator=(const Arveres & rhs) = delete;

    Arveres(const char * _szervezo, Targy & _targy, const VasarloLista & _vasarlok) : szervezo(_szervezo), targy(_targy), vasarlok(_vasarlok.clone()), akt_licit(0) {};

    std::string & get_szervezo() { return szervezo; }

    const std::string & get_szervezo() const { return szervezo; }

    Targy & get_targy() { return targy; }

    const Targy & get_targy() const { return targy; }

    int & get_akt_licit() { return akt_licit; }

    const int & get_akt_licit() const { return akt_licit; }

    int uj_licit();
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, Arveres rhs);

#endif //PROG2_HF_ARVERES_H
