#include <iostream>
#include "gtest_lite.h"
#include "Arveres.h"
#include "memtrace.h"

int main() {

    TEST(Arveres szervezo targy, _alap) {
            Arveres arveres("Bognar Zsombor", Targy("Asztal"));
            EXPECT_STREQ("Asztal", arveres.get_targy().get_nev().c_str());
            EXPECT_STREQ("Bognar Zsombor", arveres.get_szervezo().c_str());
        } END

    TEST(Arveres szervezo targy vasarlolista, _lista_alap) {
            Arveres arveres("Bognar Zsombor", Targy("Festmeny", 500));
            EXPECT_EQ(500, arveres.get_targy().get_ar());
            arveres.hozzaad("Fabian Gabor");
            arveres.hozzaad("Zoli");
            arveres.hozzaad("Nagy Tamas");
            std::cout << arveres << std::endl;
        } END

    TEST(Arveres cloneozas, _clone) {
        Arveres arveres("Bognar Zsombor", Targy("Ceruza", 100));
        arveres.hozzaad("Fabian Gabor");
        arveres.hozzaad("Zoli");
        arveres.hozzaad("Nagy Tamas");
        Arveres cloned(arveres.get_szervezo(), arveres.get_targy());
        cloned.set_vasarlok(arveres);
        std::cout << cloned << std::endl;
    } END

    TEST(Arveres throws, _throws) {
        Arveres arveres("Bognar Zsombor", Targy("Alma", 120));
        EXPECT_THROW(std::cout << arveres, Arveres::NoCustomersAdded);
        arveres.hozzaad("Zoli");
        EXPECT_THROW(std::cout << arveres, Arveres::OnlyOneCustomerAdded);
    } END

    return 0;
}
