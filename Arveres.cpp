//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Arveres.h"

std::ostream & Arveres::kiir(std::ostream &os) {
    return os;
}

Vasarlo & Arveres::operator[](const std::string & nev) {
    VasarloLista::iterator iter;
    for (iter = vasarlok.begin(); iter != vasarlok.end(); ++iter) {
        if (iter->get_nev() == nev) return *iter;
    }
    throw VasarloLista::NameNotFound();
}

const Vasarlo &Arveres::operator[](const std::string & nev) const {
    VasarloLista::const_iterator iter;
    for (iter = vasarlok.begin(); iter != vasarlok.end(); ++iter) {
        if (iter->get_nev() == nev) return *iter;
    }
    throw VasarloLista::NameNotFound();
}

Arveres Arveres::operator+(Vasarlo & rhs_v) {
    vasarlok + rhs_v;
}

Arveres Arveres::operator+(Arveres &rhs_a) {
    VasarloLista::iterator iter;
    for (iter = rhs_a.vasarlok.begin(); iter != rhs_a.vasarlok.end(); ++iter) {
        vasarlok + *iter;
    }
}
