# Specifikáció

## Feladat

Egy digitális árverés szimulálása. Egy tárgyat lehet elárverezni vásárló-botok segitségével. Minden vásárló véletlenszerűen licitál az adott tárgyra. A szimuláció addig fut, amig van legalább 2 licitáló, ezután aki az utolsó licitet tette, megnyeri a tárgyat az adott áron. Nem lehet túl kevés vásárlóval elinditani az árverést.

## Árverés

Lehessen egy árveréshez tárgyat, vásárlókat és szervezőt hozzáadni. Ezeket bármikor lehet változtatni. Az utóbbit csak név alapján. Ha bármelyik hiányzik nem lehet az árverést elinditani. Hozzá lehet egysével, de teljes listaként is adni a vásárlókat. Értékek nélkül is létre lehet hozni, de ilyenkor utólag kell mindent megadni, nincsenek alapértékei. Ki is lehet törölni vásárlókat az árverésből név alapján.

## Vásárló

Van neve és licit értéke, amilyen eséllyel tud licitálni egy tárgyra. Létre lehet hozni név nélkül is, de ne lehessen elindítani, amíg nincs név megadva.

## Tárgy

Van neve és kezdőértéke, amiről indul a licitálása. Név nélkül nem lehet létrehozni, de van alap licit értéke.

Az alap operatorokkal lehessen a programot kezelni.
