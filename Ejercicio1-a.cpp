#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Sumar los numeros del 1 al 100
Elaborado por: Leyder Londoño Mejia,Fernando Lopez Mejia*/
int main(){
	int cont,num,suma=0;
	printf("Ingrese el total de numeros a sumar \n");
	scanf("%i",&num);
	
	cont=1;
	while(cont<=num){
		suma=suma+cont;
		cont++;
	}
	
	printf("\n La suma total es: %i",suma);
	return 0;
}

