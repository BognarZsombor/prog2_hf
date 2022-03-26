//
// Created by Zsombor on 2022. 03. 25..
//

#include "VasarloLista.h"

VasarloLista::VasarloLista(const VasarloLista & rhs_l) {
    VasarloLista::const_iterator iter;
    ListaElem * akt_elem;
    akt_elem = NULL;
    eleje = akt_elem;
    for (iter = rhs_l.begin(); iter != rhs_l.end(); ++iter) {
        akt_elem = new ListaElem;
        akt_elem->adat = *iter;
        akt_elem->kov = NULL;
        akt_elem = akt_elem->kov;
    }
}

void VasarloLista::operator+(const Vasarlo & v) {
    VasarloLista::iterator iter;
    for (iter = begin(); iter != end(); ++iter) {}
    *iter = v;
}
