#include <iostream>
#include "gtest_lite.h"
#include "Arveres.h"

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
            std::cout << arveres;
        } END

    return 0;
}
