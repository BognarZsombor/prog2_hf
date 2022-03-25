//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Vasarlo.h"

std::ostream & Vasarlo::kiir(std::ostream &os) {
    os << nev << "(" << licit_ertek << ")";
    return os;
}
