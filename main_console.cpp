//
// Created by Zsombor on 2022. 05. 13..
//

#include <iostream>
#include "gtest_lite.h"
#include "Arveres.h"
#include "memtrace.h"

using namespace std;

int main() {
    bool run = true;
    int command = 0;
    Arveres arveres;
    while (run) {
        cout << "0: kilepes, 1: uj arveres, 2: arveresresztvevo hozzaadas, 3: arveres futtatasa" << endl << "Parancs: ";
        if(cin >> command) {
            cin.clear();
            cin.sync();
            switch (command) {
                case 0:
                    run = false;
                    break;
                case 1: {
                    cout << "Szervezo neve: ";
                    string nev;
                    getline(cin, nev);
                    cout << "Targy neve: ";
                    string t_nev;
                    getline(cin, t_nev);
                    cout << "Targy ara: ";
                    int ar;
                    while (!(cin >> ar)) { cout << "Targy ara: "; }
                    arveres = Arveres(nev, Targy(t_nev, ar));
                    break;
                }
                case 2: {
                    cout << "Resztvevo neve: ";
                    string nev;
                    getline(cin, nev);
                    arveres.hozzaad(nev.c_str());
                    break;
                }
                case 3: {
                    cout << arveres << endl;
                    break;
                }
                default:
                    cout << "Nincs ilyen parancs" << endl;
                    break;
            }
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nem sikerult beolvasni a parancsot." << endl;
        }
    }

    return 0;
}
