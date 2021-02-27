#include "./lista/lista.h"  //ruta es el punto donde se encuentra este archivo, carpeta lista, lista

Arbol creaRaiz(datoArbol u);
Arbol& listaHijos(Arbol n); //arbol& de tipo referencia
void insertaHijoMasIzq(Arbol &n, Arbol &Ti);
void insertaHermanoDer(Arbol &n,Arbol &Td);
Arbol raiz(Arbol raiz);
Arbol hijoMasIzq(Arbol n);
Arbol HermanoDer(Arbol n);
bool esHoja(Arbol n);
bool esNulo(Arbol n);
bool esHijo(Arbol n, Arbol padre);
void reEtiqueta(datoArbol e, Arbol& n, Arbol raiz);
Arbol padre(Arbol n, Arbol raiz);
datoArbol etiqueta(Arbol n);