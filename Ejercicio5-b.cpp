#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear una matriz 3x3 y llenarla de manera
automatica por el sistema.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	int suma=0,i,j;
	int matriz[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			suma+=1;
			matriz[i][j]=suma;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++) {
			printf("%d\t",matriz[i][j]);
			}
		printf("\n");
	}
	return 0;
}

