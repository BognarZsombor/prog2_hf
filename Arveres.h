//
// Created by Zsombor on 2022. 03. 24..
//

#ifndef PROG2_HF_ARVERES_H
#define PROG2_HF_ARVERES_H

#include <iostream>
#include "Targy.h"
#include "Vasarlo.h"

class Arveres {
    std::string szervezo;
    Targy targy;
    Vasarlo *lista_elem;

public:
    Arveres(std::string& sz, Targy& t, Vasarlo* v = nullptr) : szervezo(sz), targy(t), lista_elem(v) {};

    std::string & get_szervezo() { return szervezo; }

    const std::string & get_szervezo() const { return szervezo; }

    Targy & get_targy() { return targy; }

    const Targy & get_targy() const { return targy; }

    Vasarlo & operator[](int index);

    const Vasarlo & operator[](int index) const;

    std::ostream & kiir(std::ostream & os);

    Arveres operator+(Vasarlo& rhs_v);

    Arveres operator+(Arveres& rhs_a);

    Arveres operator-(Vasarlo& rhs_v);

    Arveres operator-(Arveres& rhs_a);

    Arveres& operator+=(Vasarlo& rhs_v);

    Arveres& operator+=(Arveres& rhs_a);

    Arveres& operator-=(Vasarlo& rhs_v);

    Arveres& operator-=(Arveres& rhs_a);
};


#endif //PROG2_HF_ARVERES_H
