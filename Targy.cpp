//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Targy.h"

std::ostream & Targy::kiir(std::ostream &os) {
    os << nev << "(" << ar << ")";
    return os;
}
