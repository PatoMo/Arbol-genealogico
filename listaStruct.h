#ifndef LISTA_STRUCT_H
#define LISTA_STRUCT_H
#define tipoDato nodoArbol
#define datoArbol int

/* Estructuras*/
struct nodo{
	tipoDato dato;
	struct nodo* next;
	nodo(){
		next=NULL;
	}
	nodo(tipoDato x){
		nodo();
		dato=x;
	}
};

struct Lista{
	struct nodo* primero;
	Lista(){
		primero= NULL;
	}
};

struct Arbol:Lista{};

struct nodoArbol{
datoArbol dato;
Arbol hijos;
};




#endef