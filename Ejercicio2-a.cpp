#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Imprimir tabla de multiplicar de un numero,del 1 al 20
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/
int main() {
	int i,j,num;
	printf("Ingrese el numero de la tabla que desea imprimir \n");
	scanf("%i",&num);
		for(j=1;j<=20;j++){
			printf("%d * %d = %d \n\n",num,j,num*j);
		}
	return 0;
}

