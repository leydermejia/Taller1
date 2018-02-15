#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/*Comentario
Programa:Escribir un programa que permita ingresar el nombre
y 3 notas de N alumnos y los almacene en un array de estructura.
Mostrar los alumnos ingresados incluyendo su promedio ordenado por
orden de merito.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	int i,j;
	struct alumno{
		char nombre[20];
		char apellido[20];
		int nota[3];
		float promedio;
	} reg[3];
	
	for (i=0; i<3; i++){
		reg[i].promedio = 0;
		printf ("\n Informacion del Alumno Nº %d \n", i+1);
		printf ("Ingrese el Nombre del alumno : ");
		scanf ("%s",&reg[i].nombre[0]);
		printf ("Ingrese el Apellido del alumno: ");
		scanf ("%s",&reg[i].apellido[0]);
		for (j=0; j<3; j++){
			printf ("Ingrese la nota Nº %d de este alumno.................. : ", j+1);
			scanf ("%d",&reg[i].nota[j]);
		}
		for (j=0; j<3; j++){
			reg[i].promedio = reg[i].promedio + reg[i].nota[j];
			reg[i].promedio = reg[i].promedio / 3;
		}
	}
	
	for (i=0;i<3;i++){
		printf("\n\n El alumno \"%s %s\" \n", reg[i].nombre, reg[i].apellido);
		printf("tiene promedio %.2f, por tener las notas: ", reg[i].promedio);
		printf("'%d' '%d' ", reg[i].nota[0], reg[i].nota[1]);
		printf("'%d' '%d' \n\n", reg[i].nota[2], reg[i].nota[3]);
	}
	return 0;
}

