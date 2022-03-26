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

public:
    Arveres(std::string & sz, Targy & t, VasarloLista v = VasarloLista()) : szervezo(sz), targy(t), vasarlok(v) {};

    std::string & get_szervezo() { return szervezo; }

    const std::string & get_szervezo() const { return szervezo; }

    Targy & get_targy() { return targy; }

    const Targy & get_targy() const { return targy; }

    std::ostream & kiir(std::ostream & os);

    Vasarlo & operator[](const std::string& nev);

    const Vasarlo & operator[](const std::string& nev) const;

    Arveres operator+(Vasarlo & rhs_v);

    Arveres operator+(Arveres & rhs_a);

    Arveres operator-(Vasarlo & rhs_v);

    Arveres operator-(Arveres & rhs_a);

    Arveres& operator+=(Vasarlo & rhs_v);

    Arveres& operator+=(Arveres & rhs_a);

    Arveres& operator-=(Vasarlo & rhs_v);

    Arveres& operator-=(Arveres & rhs_a);
};


#endif //PROG2_HF_ARVERES_H
