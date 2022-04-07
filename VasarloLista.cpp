//
// Created by Zsombor on 2022. 03. 25..
//

#include "VasarloLista.h"

VasarloLista::VasarloLista(const VasarloLista & rhs_l) {
    ListaElem * rhs_iter = eleje;
    while (rhs_iter != NULL) {
        eleje = this->hozzaad(rhs_iter->adat.get_nev())
        rhs_iter = rhs_iter->kov;
    }
}

VasarloLista::ListaElem * VasarloLista::hozzaad(const Vasarlo & vasarlo) {
    ListaElem *uj = new ListaElem;
    uj->adat = Vasarlo(vasarlo_nev);
    uj->kov = NULL;

    if (eleje == NULL) {
        eleje = uj;
        return eleje;
    }
    ListaElem *iter = eleje;
    while (iter->kov != NULL) {
        if (iter->adat == vasarlo_nev) throw NameAlreadyExists();
        iter = iter->kov;
    }
    iter->kov = uj;
    return eleje;
}

VasarloLista::ListaElem * VasarloLista::hozzaad(const char * vasarlo_nev) {
    ListaElem *uj = new ListaElem;
    uj->adat = Vasarlo(vasarlo_nev);
    uj->kov = NULL;

    if (eleje == NULL) {
        eleje = uj;
        return eleje;
    }
    ListaElem *iter = eleje;
    while (iter->kov != NULL) {
        if (iter->adat == vasarlo_nev) throw NameAlreadyExists();
        iter = iter->kov;
    }
    iter->kov = uj;
    return eleje;
}

VasarloLista::ListaElem * VasarloLista::torol(const char * vasarlo_nev) {
    VasarloLista::ListaElem * iter = eleje;
    VasarloLista::ListaElem * lemarado = NULL;
    while (iter != NULL && iter->adat != vasarlo_nev) {
        lemarado = iter;
        iter = iter->kov;
    }

    if (iter == NULL) throw ElementNotFound();
    if (lemarado == NULL) {
        ListaElem *ujeleje = iter->kov;
        delete iter;
        eleje = ujeleje;
        return eleje;
    }
    lemarado->kov = iter->kov;
    delete iter;
    return eleje;
}

VasarloLista::~VasarloLista() {
    ListaElem * iter = eleje;
    while (iter != NULL) {
        ListaElem * kov = iter->kov;
        delete iter;
        iter = kov;
    }
}











