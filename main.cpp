#include <stdio.h>
#include "arbol.h"
#include <string.h>
#include "./lista/lista.h"
#include <iostream>
#include <cstdio>
int main(){
  int opcion;
  char name[30];
  Arbol persona;
printf("Arbol Familiar \n");

	printf("Creando arbol familiar...\n");

	Arbol Raul = creaRaiz(1901/1/27-1985/4/15);  //n1
	Arbol Maria = creaRaiz(1925/9/12-1967/2/10);    //n2
	Arbol Josefina = creaRaiz(1930/2/14-1990/12/02);  //n3
	Arbol Tomas = creaRaiz(1950/5/22-0 ); //n4
	Arbol Jose = creaRaiz(1952/12/17-1957/7/29); //n5
	Arbol Rafael = creaRaiz(1950/9/14-0); //n6
	Arbol Camila = creaRaiz(1960/7/07-0); //n7
	Arbol Josefa = creaRaiz(1984/8/02-0); //n8
	Arbol Felipe = creaRaiz(1980/12/02-0);  //n9
	Arbol Valentina = creaRaiz(1982/4/04-0);   //n10
  Arbol Ignacio = creaRaiz(2009/12/12-0); //n11
  Arbol Pedro = creaRaiz(2011/3/24-0);  //n12
  Arbol Nadie= creaRaiz(0);
	// NIVEL 2
	insertaHijoMasIzq(Raul, Maria);
	Maria = hijoMasIzq(Raul);
	insertaHermanoDer(Maria, Josefina);
	Josefina = HermanoDer(Maria);
	
	printf("NIVEL 2\n");
	imprime(listaHijos(Raul));

	// NIVEL 3
	insertaHijoMasIzq(Maria, Tomas);
	Tomas = hijoMasIzq(Maria);
	insertaHermanoDer(Tomas, Jose);
	Jose = HermanoDer(Tomas);
	insertaHijoMasIzq(Josefina, Rafael);
	Rafael = hijoMasIzq(Josefina);
  insertaHermanoDer(Rafael,Camila);
  Camila = HermanoDer(Rafael);

	printf("NIVEL 3\n");
	imprime(listaHijos(Maria));
	imprime(listaHijos(Josefina));

	// NIVEL 4
	insertaHijoMasIzq(Tomas, Nadie);
	Nadie = hijoMasIzq(Tomas);
	insertaHermanoDer(Nadie, Josefa);
	Josefa = HermanoDer(Nadie);
	insertaHijoMasIzq(Rafael, Felipe);
	Felipe = hijoMasIzq(Rafael);
  insertaHermanoDer(Felipe, Valentina);
  Valentina= HermanoDer(Felipe);

	printf("NIVEL 4\n");
	imprime(listaHijos(Tomas));
	imprime(listaHijos(Rafael));

  //NIVEL 5
  insertaHijoMasIzq(Valentina, Ignacio);
  Ignacio=hijoMasIzq(Valentina);
  insertaHermanoDer(Ignacio, Pedro);
  Pedro= HermanoDer(Ignacio);

//TERMINAR ESTO
 printf("Menú principal, elija una opción del 1 al 6: \n");
 printf("1.-El más longevo es. \n ");
 printf("2.-Los hijos de x persona. \n ");
 printf("3.-El padre de x persona. \n");
 printf("4.-La generación a la que pertenece x persona. \n");
//Modificar los datos de un familiar buscando por nombre
printf("5.-Los antecesores de x persona. \n");
printf("6.-Los familiares con vida. \n" );
scanf("%d",&opcion);
while ((opcion <=1) && (opcion>=6));{
switch ( opcion ){
 case 1:printf("1.-El más longevo es Tomas. ");
 case 2: printf("2.- ¿De qué persona desea saber los hijos?");
 do{ scanf("%s",name);    
 reEtiqueta(name, persona, Raul);
 padre(Raul, persona);
 printf("Los hijos son: %d", aux);
 }
 case 3: printf("3.-El padre de que persona desea saber);
 do{scanf("%s",name); 
reEtiqueta(name, persona, Raul);
 padre(Raul, persona);
 
  }
 case 4: printf("4.-La generación a la que pertenece &s es generacion &d",generacion,&numgeneracion );
 case 5: printf("5.-Los antecesores de &s son: &s",nombre);
 case 6: printf("6.-Los familiares con vida son: %d",convida);
}
}

return 0;
}
