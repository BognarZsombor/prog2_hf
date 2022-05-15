//
// Created by Zsombor on 2022. 03. 25..
//

#include "VasarloLista.h"
#include "Arveres.h"
#include "memtrace.h"

Licit VasarloLista::licit() const {
    srand(time(NULL));
    Licit licit;
    licit.licit = 0;
    ListaElem * iter = eleje;
    int random;
    while (iter != NULL) {
        random = rand() % 100;
        if (random < iter->adat.get_licit_ertek()) {
            licit.licit += iter->adat.get_licit_ertek() * 1000 + rand() % 1000;
            licit.licitalo = iter->adat;
        }
        iter = iter->kov;
    }
    return licit;
}

int VasarloLista::count() const {
    if (eleje == NULL) return 0;
    ListaElem * iter = eleje;
    int ossz = 0;
    while (iter != NULL) {
        ossz++;
        iter = iter->kov;
    }
    return ossz;
}

void VasarloLista::clone(VasarloLista & other) const {
    if (eleje == NULL) return;
    ListaElem * iter = eleje;
    while (iter != NULL) {
        other.hozzaad(iter->adat);
        iter = iter->kov;
    }
}

void VasarloLista::hozzaad(const Vasarlo & vasarlo) {
    ListaElem * uj_eleje = NULL;
    ListaElem * uj = new ListaElem;
    uj->adat = vasarlo;
    uj->kov = NULL;

    if (eleje == NULL) {
        uj_eleje = uj;
        eleje = uj_eleje;
        return;
    }
    ListaElem *iter = eleje;
    while (iter->kov != NULL) {
        if (iter->adat == vasarlo) throw NameAlreadyExists();
        iter = iter->kov;
    }
    iter->kov = uj;
}

void VasarloLista::hozzaad(const char * vasarlo_nev) {
    ListaElem * uj_eleje = NULL;
    ListaElem * uj = new ListaElem;
    uj->adat = Vasarlo(vasarlo_nev);
    uj->kov = NULL;

    if (eleje == NULL) {
        uj_eleje = uj;
        eleje = uj_eleje;
        return;
    }
    ListaElem *iter = eleje;
    while (iter->kov != NULL) {
        if (iter->adat == vasarlo_nev) throw NameAlreadyExists();
        iter = iter->kov;
    }
    iter->kov = uj;
}

void VasarloLista::torol(const char * vasarlo_nev) {
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
        return;
    }
    lemarado->kov = iter->kov;
    delete iter;
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
    ListaElem * uj = new ListaElem;
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

VasarloLista::ListaElem * VasarloLista::torol(const char * vasarlo_nev) const {
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
        return ujeleje;
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
