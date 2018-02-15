#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear un programa que devuelva el codigo ascii
de una vocal ingresada.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	char vocal;
	printf("Ingrese una vocal, para saber su respectivo codigo ascii \n");
	scanf("%c",&vocal);
	switch(vocal){
	case 'A': printf("alt 65");
	break;
	case 'E': printf("alt 69");
	break;
	case 'I': printf("alt 73");
	break;
	case 'O': printf("alt 79");
	break;
	case 'U': printf("alt 85");
	break;
	}
	switch(vocal){
	case 'a': printf("alt 97");
	break;
	case 'e': printf("alt 101");
	break;
	case 'i': printf("alt 105");
	break;
	case 'o': printf("alt 111");
	break;
	case 'u': printf("alt 117");
	break;
	}
	return 0;
}

