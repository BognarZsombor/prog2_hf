# Terv

### Árverés

```c++
struct Licit {
    Vasarlo licitalo;
    int licit;

    Licit() : licit(0) { };
};

class Arveres {
    std::string szervezo;
    Targy targy;
    VasarloLista vasarlok;
    Licit akt_licit;

    Arveres(const Arveres &);

public:

    class NoCustomersAdded : public std::exception {
        const char * what() const noexcept override { return "Nincsenek vasarlok hozzaadva."; }
    };

    class OnlyOneCustomerAdded : public std::exception {
        const char * what() const noexcept override { return "Csak egy licitáló van hozzáadva."; }
    };

    Arveres() { };

    Arveres(const char * _szervezo, const Targy & _targy);

    Arveres(std::string & _szervezo, const Targy & _targy);

    std::string & get_szervezo();

    const std::string & get_szervezo() const;

    Targy & get_targy();

    const Targy & get_targy() const;

    Licit & get_akt_licit();

    const Licit & get_akt_licit() const;

    void set_vasarlok(Arveres & other);

    void hozzaad(const char * vasarlo_nev);

    void torol(const char * vasarlo_nev);

    bool uj_licit();

    bool nincs_vasarlo() const;

    int vasarlok_szama() const;
};

std::ostream & operator<<(std::ostream & os, Arveres & rhs);
```

### Vásárló

```c++
class Vasarlo {
    std::string nev;
    int licit_ertek;

public:
    Vasarlo() { };

    explicit Vasarlo(const char * n, int l = 0);

    explicit Vasarlo(const std::string & n, int l = 0);

    std::string & get_nev();

    const std::string & get_nev() const;

    int & get_licit_ertek();

    const int & get_licit_ertek() const;

    bool operator==(const Vasarlo & rhs);

    bool operator==(const char * rhs);

    bool operator!=(const Vasarlo & rhs);

    bool operator!=(const char * rhs);
};

std::ostream & operator<<(std::ostream & os, const Vasarlo & rhs);
```

### Tárgy

```c++
class Targy {
    std::string nev;
    int ar;

public:
    Targy() { };

    Targy(const char * n, int a = 0);

    Targy(const std::string & n, int a = 0);

    std::string & get_nev();

    const std::string & get_nev() const;

    int & get_ar();

    const int & get_ar() const;
};

std::ostream & operator<<(std::ostream & os, const Targy & rhs);
```

### VásárlóLista

```c++
class VasarloLista {
    struct ListaElem {
        ListaElem * kov;
        Vasarlo adat;
    };

    ListaElem * eleje;

    VasarloLista(VasarloLista const & rhs_l);

public:

    class ElementNotFound : public std::exception {
        const char * what() const noexcept override { return "Ilyen nevu ember nincs a listaban."; }
    };

    class NameAlreadyExists : public std::exception {
        const char * what() const noexcept override { return "Mar van a listaban ilyen nevu ember"; }
    };

    VasarloLista(ListaElem * _eleje = NULL);

    void hozzaad(const Vasarlo & vasarlo);

    void hozzaad(const char * vasarlo_nev);

    void torol(const char * vasarlo_nev);

    ListaElem * hozzaad(const Vasarlo & vasarlo) const;

    ListaElem * hozzaad(const char * vasarlo_nev) const;

    ListaElem * torol(const char * vasarlo_nev) const;

    bool empty() const;

    int count() const;

    void clone(VasarloLista & other) const;

    Licit licit() const;

    ~VasarloLista();
};

std::ostream & operator<<(std::ostream & os, const VasarloLista & rhs);
```
