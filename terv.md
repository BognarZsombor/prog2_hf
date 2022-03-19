# Terv

## Objetkumok

### Árverés

```c++
class Arveres {
        Targy targy;
        Vasarlo *lista_elem;
        
        Arveres(Vasarlo v = NULL, Targy t = NULL);
        
        Arveres(Vasarlo *v, Targy t = NULL);
        
        void operator+();
        
        void operator-();
};
```
