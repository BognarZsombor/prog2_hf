# Specifikáció

## A program működése

Lesz egy árverés objektum, amihez tartozik pontosan egy tárgy és tetszőleges számú vásárló. Ezen az objektumon keresztül lehet majd elindítani az árverést. Ha elindul az árverés a szervező kikiált egy kezdő árat. Ezután végigmegyek a vásárlókon és véletlenszerűen licitálnak, illetve nem licitálnak. Ha egyik vásárló sem licitál már, kiírom a nyertes vásárló nevét.

## Objektumok

### Árverés

Van tárggya, vásárlói. Hozzá lehet adni szervezőt, tárgyat, vásárlókat. El lehet indítani. A vásárlók láncolt listában vannak tárolva.

### Vásárló

Van neve, értéke, amilyen eséllyel licitál egy tárgyra.

### Tárgy

Van neve, kezdőértéke.

Minden funkcióját az objektumoknak operator overloadinggal akarom megoldani. Pl: Vásárló hozzáadása az árveréshez az operator+-szal történik. Tesztprogrammal fogom ellenőrizni a helyes működést.
