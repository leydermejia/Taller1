#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/*Comentario
Programa:Hacer una estructura llamada competidor en la cual se tendran los sgtes
campos:Nombre,edad,sexo,club, pedir datos al usuario para un competidor y
asignarle una categoria
Infantil<=15 años
Joven<=30 años
Mayor<=30 años
posteriormente imprimir todos los datos del competidor, incluida su categoria
de competicion.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/
struct Competidores{
	char nombre[30];
	char sexo [30];
	char club [30];
	char categoria [30];
	int edad;
};
void datos(Competidores v[], int tam);
int main() {
	Competidores v[100];
	int tam;
	datos(v,tam);
	return 0;
}
void datos(Competidores v[],int tam){
	int i;
	printf("Ingrese Cantidad de Competidores: \n");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores: \n");
	for(i=0;i<=tam;i++){
		fflush (stdin);
		printf("Nombre: \n");
		fgets(v[i].nombre,30,stdin);
		
		printf("Edad: \n");
		scanf("%d",&v[i].edad);
		
		fflush (stdin);
		printf("Sexo: \n");
		fgets(v[i].sexo,30,stdin);
		
		fflush(stdin);
		printf("Club: \n");
		fgets(v[i].club,30,stdin);
		if (v[i].edad <= 15){
			strcpy(v[i].categoria," Infantil ");
		}
		else  if(v[i].edad<=30){
			strcpy(v[i].categoria," Joven ");
		} else {
			strcpy(v[i].categoria," Señor ");
		}
	}
	printf(" <<<< Listado de Competidores >>>> \n " );	
	for(i=0;i<tam;i++){
		printf("Nombre:%s \r\t Edad:%d \t Sexo:%s \r\t Club:%s \r\t Categoria:%s \t \n ",v[i].nombre,v[i].edad,v[i].sexo,v[i].club,v[i].categoria);
	}
}
