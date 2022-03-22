# Terv

## Objetkumok

### Árverés

```c++
class Arveres {
    Targy targy;
    Vasarlo *lista_elem;
    
public:
    Arveres(Vasarlo v = NULL, Targy t = NULL);
    
    Arveres(Vasarlo *v, Targy t = NULL);
    
    void operator+();
    
    void operator-();
    
    Vasarlo& operator[](int index);
    
    const Vasarlo& operator[](int index) const;
    
    Targy& targy();
    
    const Targy& targy() const;
    
    ostream& kiir(ostream& os);
};
```

### Vásárló

```c++
class Vasarlo {
    int id;
    std:basic_string<char> nev;
    int licit_ertek;
    
public:
    std:basic_string<char>& nev();
    
    const std:basic_string<char>& nev() const;
    
    int& licit_ertek();
    
    const int& licit_ertek() const;
    
    ostream& kiir(ostream& os);
};
```

### Tárgy

```c++
class Targy {
    std:basic_string<char> nev;
    int ar;
    
public:
    std:basic_string<char>& nev();
    
    const std:basic_string<char>& nev() const;
    
    int& ar();
    
    const int& ar() const;
    
    ostream& kiir(ostream& os);
};
```

### Global funkciók

```c++
template<class T>
ostream& operator<<(ostream& os, T rhs);
```
