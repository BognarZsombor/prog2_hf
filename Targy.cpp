//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Targy.h"

std::ostream & operator<<(std::ostream & os, const Targy & rhs) {
    os << rhs.get_nev() << "(" << rhs.get_ar() << ")";
    return os;
}
