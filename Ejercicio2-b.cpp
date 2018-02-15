#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Factorial de un numero 
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	int i, num,fact=1;
	printf("Ingrese el numero al cual quiere hallarle el factorial \n");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("El factorial del numero es: %i",fact);
	return 0;
}

