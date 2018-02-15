#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Sumar los numeros pares del 1 al 50
Fecha:14 Noviembre 2017
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/
int main() {
	int cont,i,suma=0;
	for(i=1;i<=50;i++){
		if(i%2==0){
			suma=suma+i;
		}
	}
	
	printf("\n La suma de los 50 numeros pares es: %i",suma);
	
	return 0;
}
