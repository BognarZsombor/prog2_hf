# Ponstositott Specifikáció

## Objektumok

### Licit

Ezzel tudnak az objektumok egymás között liciteket átadni, amivel a licitálót és a licit értékét is látjuk.

#### Tulajdonságok

Licitáló, licit

#### Public Funkciók

Konstruktor: létrehoz egy licitet, 0 licit értékkel.

### Árverés

Az árverés lebonyolítására szolgáló objektum. Nem lehet másoló konstruktort és egyenlőség opetárort használni.

#### Tulajdonságok

Szervező: Az árverés szervezőjének neve.
Tárgy: Az árverésen elárverezendő tárgy.
VásárlóLista: Az árveréshez tartozó vásárlók listája.
Licit: A legnagyobb érvényes licit.

#### Public Funkciók

Konstruktor: Meg kell adni a szervező nevét, és a tárgyat. Vásárlókat később lehet hozzáadni.

### Vásárló

#### Tulajdonságok

Id: Az adott árverésben lévők száma, mivel több embernek is ugyanaz lehet a neve.
Név: Fix hosszú char tömb.
LicitÉrték: A licitáláskor vett random számban játszik szerepet.

#### Public Funkciók

Név szerkesztés : Getter és Setter

Licitérték szerkesztés : Getter és Setter

kiir : Kiir egy vásárló példányt.

### Tárgy

#### Tulajdonságok

Név: Fix hosszú char tömb.
Ár: A licitáláshoz használt kezdőérték.

#### Public Funkciók

Ár szerkesztés : Getter és Setter

### Global funkciók

kiiras << : Kiirja az objektumokat. Árverés esetében elinditja az árverést. Template-ként van megirva, minden classnak meghivja a hozzátartozó függvényt.

Minden objektum kiirása és beolvasása operatorokkal. Getter és Setter függvények a paraméterekhez. Ha több tárgyat szeretnénk elárverezni, több Árverés objektum kell és ezeket egymás után kiirhatjuk. Minden objektumnak több konstruktora lesz, hogy előre megadott adatokkal feltölthessük.

![osztaly_diagram](osztaly_diagram.png)
