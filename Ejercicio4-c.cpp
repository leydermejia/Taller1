#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear un programa que devuelva el codigo ascii
de un numero ingresado del 0 al 9.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	int num;
	printf("Ingrese un numero del 0 al 9, para saber su respectivo codigo ascii \n");
	scanf("%d",&num);
	switch(num){
	case 0: printf("alt 48");
	break;
	case 1: printf("alt 49");
	break;
	case 2: printf("alt 50");
	break;
	case 3: printf("alt 51");
	break;
	case 4: printf("alt 52");
	break;
	case 5: printf("alt 53");
	break;
	case 6: printf("alt 54");
	break;
	case 7: printf("alt 55");
	break;
	case 8: printf("alt 56");
	break;
	case 9: printf("alt 57");
	break;
	}
	
	return 0;
}

