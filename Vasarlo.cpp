//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Vasarlo.h"
#include "memtrace.h"

std::ostream & operator<<(std::ostream & os, const Vasarlo & rhs) {
    os << rhs.get_nev() << "(" << rhs.get_licit_ertek() << ")";
    return os;
}
