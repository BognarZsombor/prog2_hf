//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Arveres.h"

int Arveres::uj_licit() {
    srand(time(NULL));
    int temp_licit = vasarlok.licit(rand());
    while (akt_licit < temp_licit) {
        akt_licit = temp_licit;
        temp_licit = vasarlok.licit(rand());
    }
}

std::ostream & operator<<(std::ostream & os, Arveres & rhs) {
    int temp_licit = rhs.uj_licit();
    while (temp_licit > rhs.get_akt_licit()) {
        rhs.get_akt_licit() = temp_licit;
        temp_licit = rhs.uj_licit();
    }
    return os;
}
