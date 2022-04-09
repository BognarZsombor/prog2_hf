//
// Created by Zsombor on 2022. 03. 25..
//

#ifndef PROG2_HF_VASARLOLISTA_H
#define PROG2_HF_VASARLOLISTA_H

#include <iostream>
#include "Vasarlo.h"

class VasarloLista {
    struct ListaElem {
        ListaElem * kov;
        Vasarlo adat;
    };

    ListaElem * eleje;

public:

    VasarloLista(VasarloLista const & rhs_l) = delete;

    VasarloLista& operator=(const VasarloLista & rhs) = delete;

    class ElementNotFound : public std::exception {
        const char * what() const throw() override { return "Ilyen nevű ember nincs a listában."; }
    };

    class NameAlreadyExists : public std::exception {
        const char * what() const throw() override { return "Már van a listában ilyen nevű ember"; }
    };

    VasarloLista(ListaElem * _eleje = NULL) { eleje = _eleje; }

    ListaElem * hozzaad(const Vasarlo & vasarlo) const;

    ListaElem * hozzaad(const char * vasarlo_nev) const;

    ListaElem * torol(const char * vasarlo_nev);

    ListaElem * clone() const;

    int licit(int random) const;

    ~VasarloLista();
};

/// GLobal függvények

std::ostream & operator<<(std::ostream & os, const VasarloLista & rhs);

#endif //PROG2_HF_VASARLOLISTA_H
