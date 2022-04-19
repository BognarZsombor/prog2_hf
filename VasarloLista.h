//
// Created by Zsombor on 2022. 03. 25..
//

#ifndef PROG2_HF_VASARLOLISTA_H
#define PROG2_HF_VASARLOLISTA_H

#include <iostream>
#include "Vasarlo.h"

struct Licit;

class VasarloLista {
    struct ListaElem {
        ListaElem * kov;
        Vasarlo adat;
    };

    ListaElem * eleje;

    VasarloLista(VasarloLista const & rhs_l);

    VasarloLista& operator=(const VasarloLista & rhs);

public:

    class ElementNotFound : public std::exception {
        const char * what() const noexcept override { return "Ilyen nevű ember nincs a listában."; }
    };

    class NameAlreadyExists : public std::exception {
        const char * what() const noexcept override { return "Már van a listában ilyen nevű ember"; }
    };

    VasarloLista(ListaElem * _eleje = NULL) { eleje = _eleje; }

    void hozzaad(const Vasarlo & vasarlo);

    void hozzaad(const char * vasarlo_nev);

    void torol(const char * vasarlo_nev);

    ListaElem * hozzaad(const Vasarlo & vasarlo) const;

    ListaElem *  hozzaad(const char * vasarlo_nev) const;

    ListaElem *  torol(const char * vasarlo_nev) const;

    ListaElem * clone() const;

    Licit licit() const;

    ~VasarloLista();
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, const VasarloLista & rhs);

#endif //PROG2_HF_VASARLOLISTA_H
