//
// Created by Zsombor on 2022. 03. 24..
//

#include <iostream>
#include "Arveres.h"

std::ostream & Arveres::kiir(std::ostream &os) const {

    return os;
}

template<class T>
std::ostream & operator<<(std::ostream & os, const T & _t) {
    return _t.kiir(os);
}
