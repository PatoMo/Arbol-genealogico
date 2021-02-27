#include "arbol.h"
#include <stdio.h>

/*
* Nombre de la función: creaRaiz.
* Tipo de función: Arbol
* Parámetros: datoArbol u , que varía según la definición que se le dé en Listastruct
* Dato de retorno: “r” de tipo lista;
* Descripción de la función: Crea un nodo con informacion u y que no tiene hijos, devolviendo un arbol r con un único nodo 

* Nombre de la función: insertaHijoMasIzq
* Tipo de función: void
* Parámetros: “&n” de tipo Arbol y &Ti de tipo Arbol.
* Dato de retorno: ninguno.
* Descripción de la función: Inserta un nodo que es "hijo" mas a la izquierda del nodo raiz o del nivel anterior en el Arbol, anulando la info de la lista anterior de tipo nodo

* Nombre de la función: insertaHermanoDer
* Tipo de función: void
* Parámetros: “&n” de tipo Arbol y &Td de tipo Arbol.
* Dato de retorno: nada;
* Descripción de la función: Inserta un nodo que es "hijo" a la derecha del nodo raiz o del nivel anterior en el Arbol, y "hermano" del nodo a su izquierda.

* Nombre de la función: hijoMasIzq
* Tipo de función: Arbol
* Parámetros: "n" de tipo Arbol
* Dato de retorno: “x.hijos" de tipo arbol
* Descripción de la función: devuelve en x de tipo arbol(en este caso) , el campo de hijos que se encuentra alli que es de tipo lista

* Nombre de la función: esHijo
* Tipo de función: bool
* Parámetros: "n" de tipo Arbol y "padre" de tipo Arbol
* Dato de retorno: true o false
* Descripción de la función:función que se encarga de verificar si un nodo n es "hijo" de el nodo "padre", verificando, recuperando, guardando y localizando los nodos para el darnos el "parentesco" que puede haber entre ambos nodos

* Nombre de la función: padre
* Tipo de función: Arbol
* Parámetros: "n" de tipo Arbol y "raiz" de tipo Arbol 
* Dato de retorno: “raiz" de tipo arbol 
* Descripción de la función: verifica si el nodo "raiz" es "padre" del nodo "n", devolviendo ese nodo de ser raiz de "n", de no ser así, hace una revisión de cada nivel hasta encontrar el "padre" de izquierda a derecha, devolviendo en otro caso el "aux".

* Nombre de la función: listaHijos
* Tipo de función: Arbol
* Parámetros: "n" de tipo Arbol 
* Dato de retorno: “hijos" de tipo lista
* Descripción de la función: funcion que busca la lista de hijos en los datos, desde el primer nodo o nodo "raiz"

*/

Arbol creaRaiz(datoArbol u){
  Arbol r;
  nodoArbol n;
   n.dato = u;
   inserta(n, primero(r), r); //informacion,donde se guarda,en que lista(la lista r)
   return r;
}

    Arbol& listaHijos(Arbol n){
      return n.primero->dato.hijos;
   }

    void insertaHijoMasIzq(Arbol &n, Arbol &Ti){
    Arbol& hijos = listaHijos(n);
    tipoDato raizTi=recupera(primero(Ti), Ti);
    inserta(raizTi, primero(hijos), hijos);
    anula((Lista&)Ti);
    }

    void insertaHermanoDer(Arbol &n,Arbol &Td){
    tipoDato raizTd = recupera(primero(Td), Td);
    inserta(raizTd,siguiente(primero(n),n),n);
    anula((Lista&)Td);
    }

    Arbol raiz(Arbol raiz){
    return raiz;
    }

    Arbol hijoMasIzq(Arbol n){
    tipoDato x = recupera(primero(n),n);
    return x.hijos;
    }

Arbol HermanoDer(Arbol n){
        Arbol r;
    r.primero = n.primero->next;
    return r;
        }

bool esHoja(Arbol n){
    tipoDato x= recupera(primero(n),n);
    return vacia(x.hijos);
}
bool esNulo(Arbol n){
    return vacia(n);
    }

bool esHijo(Arbol n, Arbol padre){
    tipoDato nodoPadre = recupera (primero(padre),padre);
    tipoDato nodoAux = recupera (primero(n),n);
    int p =localiza(nodoAux, nodoPadre.hijos);
    if(p<fin(nodoPadre.hijos)){
        return true;
    } else{
    return false;
    }
    }

void reEtiqueta(datoArbol e, Arbol& n, Arbol raiz){
Arbol p = padre(n,raiz);
tipoDato nodoAux = recupera(primero(n), n);

}

Arbol padre(Arbol n, Arbol raiz){
  bool ok = esHijo(n, raiz);
  if (ok){
    return raiz; 
  } else {
    Arbol aux;
    for(Arbol c = hijoMasIzq(raiz) ; !esNulo(c) ; c = HermanoDer(c)){
      aux = padre(n,c);
      if(!esNulo(aux)){
        return aux;
      }
    }
    return aux;
  }
}

datoArbol etiqueta(Arbol n){
  tipoDato x = recupera(primero(n),n);
  datoArbol dato = x.dato;
  return dato;
}