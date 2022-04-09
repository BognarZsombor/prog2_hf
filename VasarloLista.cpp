//
// Created by Zsombor on 2022. 03. 25..
//

#include "VasarloLista.h"

int VasarloLista::licit(int random) const {
    ListaElem * iter = eleje;
    while (iter != NULL) {
        if (random > iter->adat.get_licit_ertek()) {

        }
        iter = iter->kov;
    }
}

VasarloLista::ListaElem * VasarloLista::clone() const {
    ListaElem * uj_lista = eleje;
    ListaElem * iter = eleje;
    while (iter != NULL) {
        uj_lista = hozzaad(iter->adat);
        iter = iter->kov;
    }
    return uj_lista;
}

VasarloLista::ListaElem * VasarloLista::hozzaad(const Vasarlo & vasarlo) const {
    ListaElem * uj_eleje = NULL;
    ListaElem * uj = new ListaElem;
    uj->adat = vasarlo;
    uj->kov = NULL;

    if (eleje == NULL) {
        uj_eleje = uj;
        return uj_eleje;
    }
    ListaElem *iter = eleje;
    while (iter->kov != NULL) {
        if (iter->adat == vasarlo) throw NameAlreadyExists();
        iter = iter->kov;
    }
    iter->kov = uj;
    return eleje;
}

VasarloLista::ListaElem * VasarloLista::hozzaad(const char * vasarlo_nev) const {
    ListaElem * uj_eleje = NULL;
    ListaElem *uj = new ListaElem;
    uj->adat = Vasarlo(vasarlo_nev);
    uj->kov = NULL;

    if (eleje == NULL) {
        uj_eleje = uj;
        return uj_eleje;
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
