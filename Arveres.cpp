//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Arveres.h"

std::ostream & Arveres::kiir(std::ostream &os) {
    return os;
}

Vasarlo & Arveres::operator[](std::string nev) {
    VasarloLista::iterator iter;
    for (iter = vasarlok.begin(); iter != vasarlok.end(); ++iter) {
        if (iter->get_nev() == nev) return *iter;
    }
    throw VasarloLista::NameNotFound();
}

const Vasarlo &Arveres::operator[](std::string nev) const {
    VasarloLista::const_iterator iter;
    for (iter = vasarlok.begin(); iter != vasarlok.end(); ++iter) {
        if (iter->get_nev() == nev) return *iter;
    }
    throw VasarloLista::NameNotFound();
}

Arveres Arveres::operator+(Vasarlo &rhs_v) {
    VasarloLista::iterator iter;
    for (iter = vasarlok.begin(); iter != vasarlok.end(); ++iter) {}
    *iter = rhs_v;
    return *this;
}
