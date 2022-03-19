# Ponstositott Specifikáció

## Objektumok

### Árverés

#### Tulajdonságok

Tárgy, VásárlóLista

#### Public Funkciók

inditás << : Elinditja az árverést az objektumon, kiirja az aktuális licitálási árakat és a végén a győztest.

vásárló hozzáadás + : VásárlóLista végére fűz egy új vásárlót. Mivel addig megyünk a licitálásban amig mindenki ki nem szállt fölösleges máshová hozzáadnunk listaelemet. Ha csak stringet adunk meg készit egy új vásárlót. Az id mindig átiródik az aktuális utolsóhoz képest. Megadhatunk egy teljes VásárlóListát is, ezzel egyszerűbb ha több tárgyat akarunk árverezni, csak át kell adnunk az előző árverés VásárlóListáját.

vásárló törlés - : VásárlóListából kitörli az adott elemet név(string) szerint. Az indexek az előző állapotban maradnak.

vásárló indexelés [] : Ha egy Árverés objektumot indexelünk a VásárlóLista elemeit érjük el. Ha nevet(string) adunk meg, visszaadja az adott nevű első vásárlót.

tárgy hozzáadás : Getter és Setter.

### Vásárló

#### Tulajdonságok

Id: Az adott árverésben lévő száma, mivel több embernek is ugyanaz lehet a neve.
Név: Fix hosszú char tömb.
LicitÉrték: A licitáláskor vett random számban játszik szerepet.

#### Public Funkciók

Licitérték szerkesztés : Getter és Setter

### Tárgy

#### Tulajdonságok

Név: Fix hosszú char tömb.
Ár: A licitáláshoz használt kezdőérték.

#### Public Funkciók

Ár szerkesztés : Getter és Setter

Minden objektum kiirása és beolvasása operatorokkal. Getter és Setter függvények a paraméterekhez. Ha több tárgyat szeretnénk elárverezni, több Árverés objektum kell és ezeket egymás után kiirhatjuk. Minden objektumnak több konstruktora lesz, hogy előre megadott adatokkal feltölthessük.
