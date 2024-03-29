//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Arveres.h"
#include "memtrace.h"

bool Arveres::uj_licit() {
    Licit temp_licit = vasarlok.licit();
    if (temp_licit.licit == 0) return false;
    akt_licit.licitalo = temp_licit.licitalo;
    akt_licit.licit += temp_licit.licit;
    return true;
}

void Arveres::hozzaad(const char * vasarlo_nev) {
    vasarlok.hozzaad(vasarlo_nev);
}

void Arveres::torol(const char * vasarlo_nev) {
    try {
        vasarlok.torol(vasarlo_nev);
    } catch (VasarloLista::ElementNotFound) {
        std::cout << "Nincs ilyen nevu ember a listaban." << std::endl;
    }
}

std::ostream & operator<<(std::ostream & os, Arveres & rhs) {
    if (rhs.nincs_vasarlo()) throw Arveres::NoCustomersAdded();
    if (rhs.vasarlok_szama() == 1) throw Arveres::OnlyOneCustomerAdded();

    int cnt = 0;
    rhs.uj_licit();
    while (rhs.uj_licit()) {
        if (rhs.get_akt_licit().licit == 0 || cnt >= 10) break;
        ++cnt;
        os << "Legmagasabb licit: " << rhs.get_akt_licit().licit << " Ft, " << rhs.get_akt_licit().licitalo.get_nev() << " altal" << std::endl;
    }
    if (rhs.get_akt_licit().licit == 0)
        os << "Nem volt licitalo a kikialtott targyra." << std::endl;
    else
        os << "Nyertes ar: " << rhs.get_akt_licit().licit << " Ft, " << rhs.get_akt_licit().licitalo.get_nev() << " altal" << std::endl;
    return os;
}
