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

    class NameNotFound : public std::exception {
        const char * what() const throw() { return "Ilyen nevű ember nincs ebben az árverésben."; }
    };

    class iterator {

        ListaElem * elem;

    public:
        iterator(ListaElem * elem = NULL) : elem(elem) {}

        iterator& operator++() {
            if (elem != NULL)
                elem = elem->kov;
            return *this;
        }

        iterator operator++(int) {
            iterator masolat = *this;
            ++(*this);
            return masolat;
        }

        Vasarlo & operator*() const { return elem->adat; }

        Vasarlo * operator->() const { return &(elem->adat); }

        bool operator==(iterator rhs) const { return elem == rhs.elem; }

        bool operator!=(iterator rhs) const { return elem != rhs.elem; }
    };

    class const_iterator {

        ListaElem * elem;

    public:
        const_iterator(ListaElem * elem = NULL) : elem(elem) {}

        const_iterator& operator++() {
            if (elem != NULL)
                elem = elem->kov;
            return *this;
        }

        const_iterator operator++(int) {
            const_iterator masolat = *this;
            ++(*this);
            return masolat;
        }

        Vasarlo const & operator*() const { return elem->adat; }

        Vasarlo const * operator->() const { return &(elem->adat); }

        bool operator==(const_iterator rhs) const { return elem == rhs.elem; }

        bool operator!=(const_iterator rhs) const { return elem != rhs.elem; }
    };

    iterator begin() { return iterator(eleje); }

    iterator end() { return iterator(NULL); }

    const_iterator begin() const { return const_iterator(eleje); }

    const_iterator end() const { return const_iterator(NULL); }
};


#endif //PROG2_HF_VASARLOLISTA_H
