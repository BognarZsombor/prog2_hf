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

    class ElementNotFound : public std::exception {
        const char * what() const throw() override { return "Ilyen nevű ember nincs a listában."; }
    };

    class NameAlreadyExists : public std::exception {
        const char * what() const throw() override { return "Már van a listában ilyen nevű ember"; }
    };

    VasarloLista() { eleje = NULL; }

    VasarloLista(VasarloLista const & rhs_l);

    VasarloLista& operator=(const VasarloLista & rhs);

    ListaElem * hozzaad(const Vasarlo & vasarlo);

    ListaElem * hozzaad(const char * vasarlo_nev);

    ListaElem * torol(const char * vasarlo_nev);

    ~VasarloLista();
};


#endif //PROG2_HF_VASARLOLISTA_H
