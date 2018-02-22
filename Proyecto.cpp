#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*Taller #1
Fecha:19-Feb-2018
Elaborado por:Leyder Londoño Mejia, Fernando Lopez Mejia*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	float totalProm;
	struct promedio notas;
}estudiante[100];
struct Competidores{
	char nombre[30];
	int edad;
	char sexo [10];
	char club [30];
	char categoria [20];
};
struct prom {
	float nota1;
	float nota2;
	float nota3;
};
struct estudiantes{
	char nombre [20];
	float totalProm;
	struct prom promedio;
}alumnos[100],aux[100];
void Menu();
void While1a();
void While1b();
void While1c();
void For2a();
void For2b();
void For2c();
void Vectores3a();
void Vectores3b();
void Vectores3c();
void Switch4a();
void Switch4b();
void Switch4c();
void Matrices5a();
void Matrices5b();
void Matrices5c();
void Estructuras6a();
void estructuras6b (int Competidores v[],int tam);
void estructuras6c();
void estructuras6d();
int main() {
	Menu();
	return 0;
}
void Menu(){
	int opcion,tam;
	Competidores v[100];
	do{
		printf("\n <------------------ MENU ------------------> \n");
		printf("\n Ingrese una de las opciones \n");
		printf("1-Ejercicios con While\n");
		printf("2-Ejercicios con For \n");
		printf("3-Ejercicios con Vectores \n");
		printf("4-Ejercicios con Switch \n");
		printf("5-Ejercicios con Matrices \n");
		printf("6-Ejercicios con Estructuras \n");
		printf("0-Salir \n");
		scanf("%d",&opcion);
		switch(opcion){	
		case 0:
			exit(0);
		case 1:	
			While1a();
			While1b();
			While1c();			
			break;
			
		case 2:
			For2a();
			For2b();
			For2c();
			break;
		case 3:
			Vectores3a();
			Vectores3b();
			Vectores3c();
			break;
		case 4:
			Switch4a();
			Switch4b();
			Switch4c();			
			break;
		case 5:
			Matrices5a();
			Matrices5b();
			Matrices5c();
			break;
		case 6:
			Estructuras6a();
			void Estructuras6a();
			void estructuras6b(v,tam);
			void estructuras6c();
			void estructuras6d();
			break;
		default:
			printf(" Incorrecto ");
		}
	}while(opcion!=0);
}
void While1a(){
	printf("\n Suma los numeros del 1 al 100\n");
	int i=0;
	int suma=0;
	while(i<100){
		i++;
		suma=suma+i;		
	}
	printf("\nla suma total es: %d\n",suma);
}
void While1b(){
	printf("Sumatoria de los numeros Pares del 1 al 50 \n");
	int i=0;
	int sumaPares=0;
	while(i<=50){		
		sumaPares=sumaPares+i;
		i+=2;
	}
	printf("\n Resultado: %d\n",sumaPares);
}
void While1c(){
	printf("Sumatoria de los numeros Impares del 1 al 50 \n");
	int i=1;
	int sumaImpares=0;
	while(i<=50){		
		sumaImpares=sumaImpares+i;
		i+=2;
	}	
	printf("\n Resultado: %d\n",sumaImpares,"\n");
}
void For2a(){
	int i,j,num;
	printf("Ingrese el numero de la tabla que desea imprimir \n");
	scanf("%i",&num);
	for(j=1;j<=20;j++){
		printf("%d * %d = %d \n\n",num,j,num*j);
	}
}
void For2b(){
	int i, num,fact=1;
	printf("Ingrese el numero al cual quiere hallarle el factorial \n");
	scanf("%i",&num);
	
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("El factorial del numero es: %d\n",fact);
}
void For2c(){
	int num,x=0,y=1,z=1;
	printf("Ingrese el numero de elementos \n");
	scanf("%i",&num);
	for(int i=1;i<num;i++){
		z=x+y;
		printf("%i",z);
		x=y;
		y=z;
	}
}
void Vectores3a(){
	int i;
	float NumDecimales[4]={32.583,11.239,45.781,22.237};
	printf("Numericos Decimales \n");
	for(i=0;i<=3;i++){
		printf("\n Los numeros decimales son: %.3f",NumDecimales[i]);
	}
}
void Vectores3b(){
	int num1;
	int num2;
	int matriz[100][100];
	printf("\nIngrese 2 numeros:\n");
	scanf("%d%d",&num1,&num2);	
	
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			if (i==j){
				matriz[i][j]=1;
			}else{
				matriz[i][j]=0;
			}
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}
void Vectores3c(){
	int matriz[4][4];
	int i,j;
	int num;
	for(i=0;i<4;i++){
		printf(" Digite un numero matriz[%][%i]: \n ",i+1,j+1);	
		scanf("%i",&num);
		for(j=0;j<4;j++){
			if(j==0){
				matriz[i][j]=num;
			}
			if(j==1){
				matriz[i][j]=pow(num,2);
			}
			if(j==2){
				matriz[i][j]=pow(num,3);
			}
			if(j==3){
				matriz[i][j]=pow(num,4);
			}
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("%i ",matriz[i][j]);
		}
		printf("\n\n");
	}
}
void Switch4a(){
	printf("Consultar el mes del sistema e imprimirlo en español \n");
	struct tm * tiempo;
	int mes;
	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	mes=tiempo->tm_mon+1;
	printf("\n El mes del sistema es: ");
	switch (mes){
	case 1:{
		printf("\n Enero \n");
		break;
	}
	case 2:{
			printf("\n Febrero \n");			
			break;
		}
	case 3:{
				printf("\n Marzo \n");
				break;
			}
	case 4:{
					printf("Abril \n");
					break;
				}
	case 5:{
						printf("Mayo \n");
						break;
					}
	case 6:{
							printf("Junio \n");
							break;
						}
	case 7:{
								printf("Julio \n");
								break;
							}
	case 8:{
									printf("Agosto \n");
									break;
								}
	case 9:{
										printf("Septiembre \n");
										break;
									}
	case 10:{
											printf("Octubre \n");
											break;
										}
	case 11:{
												printf("Noviembre \n");
												break;
											}
	case 12:{
													printf("Diciembre \n");
													break;
												}
	default:{
														printf(" Error \n");
														break;
													}
	}
	printf( "\n");    
}
void Switch4b(){
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
}
void Switch4c(){
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
}
void Matrices5a(){
	int matriz[3][3];
	int i,j;
	for  (i=0;i<3;i++){
		for  (j=0;j<3-1;j++){
			printf("Ingrese la posicion \n",i,j,"de la matriz 1 \n");
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n");
	for  (i=0;i<3;i++){
		for  (j=0;j<3;j++){
			printf("Ingrese la posicion",i,j,"de la matriz 2 \n");
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	printf("A continuacion se sumaran las matrices ingresadas \n");
	for(i=0;i<3;i++){
		for  (j=0;j<3;j++){
			matriz[i][j]= matriz[i][j]+matriz[i][j];
			printf("%d",i,j,matriz[i][j]);
		}
		printf("\n");
	}
}
void Matrices5b(){
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
}
void Matrices5c(){
	int matriz[3][3]={2, 3, 5, 7, 11, 13, 17, 19, 23} ;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			
			printf(" %i ",matriz[i][j]);
		}
		printf("\n\n");
	}
}
void Estructuras6a(){
	int i,j,cantidad;
	printf("Ingrese cantidad de estudiantes \n");
	scanf("%d",&cantidad);
	for(i=0;i<cantidad;i++){
		printf("\n %i.Ingrese Nombre del estudiante \n",i+1);
		fflush(stdin);
		fgets(alumnos[i].nombre,20,stdin);
		printf("%i.Ingrese las 3 Notas del alumno:\n",i+1);
		scanf("%f %f %f",&alumnos[i].promedio.nota1,&alumnos[i].promedio.nota2,&alumnos[i].promedio.nota3);
		alumnos[i].totalProm=(alumnos[i].promedio.nota1+alumnos[i].promedio.nota2+alumnos[i].promedio.nota3)/3;
	}
	printf("\n Alumnos con promedio \n");
	for(i=0;i<cantidad;i++){
		printf("%s%.1f\n",alumnos[i].nombre,alumnos[i].totalProm);
	}
	for(i=0;i<cantidad;i++){
		for(j=0;j<cantidad;j++){
			if(alumnos[j].totalProm < alumnos[j+1].totalProm){
				aux[j]=alumnos[j];
				alumnos[j]=alumnos[j+1];
				alumnos[j+1]=aux[j];				
			}
		}		
	}
	printf("\n Promedios en orden \n");
	for(i=0;i<cantidad;i++){
		printf("%s: %.1f \n",alumnos[i].nombre,alumnos[i].totalProm);
	}	
}
void estructuras6b(Competidores v[],int tam){
	int i;
	printf("Ingrese Cantidad de Competidores: \n");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores: \n");
	for(i=0;i<tam;i++){
		fflush (stdin);
		printf("Nombre: \n");
		fgets(v[i].nombre,30,stdin);
		
		printf("Edad: \n");
		scanf("%d",&v[i].edad);
		
		fflush (stdin);
		printf("Sexo: \n");
		fgets(v[i].sexo,10,stdin);
		
		fflush(stdin);
		printf("Club: \n");
		fgets(v[i].club,30,stdin);
		if (v[i].edad <= 15){
			strcpy(v[i].categoria," Infantil ");
		}
		else  if(v[i].edad<=30){
			strcpy(v[i].categoria," Joven ");
		} else {
			strcpy(v[i].categoria," Mayor ");
		}
	}
	printf(" <<<< Listado de Competidores >>>> \n " );	
	for(i=0;i<tam;i++){
		printf("Nombre:%s \n Edad:%d \n Sexo:%s \n Club:%s \n Categoria:%s \n ",v[i].nombre,v[i].edad,v[i].sexo,v[i].club,v[i].categoria);
	}
}
void estructuras6c(){
	int i;
	float promedio=0;	
	printf("Nombre \n ");
	fflush(stdin);
	fgets(estudiante[i].nombre,20,stdin);
	printf("Sexo \n ");
	fgets(estudiante[i].sexo,20,stdin);
	printf("Edad \n ");
	scanf("%i",&estudiante[i].edad);
	fgets(estudiante[i].sexo,20,stdin);
	printf("\nNota 1. ");
	scanf("%f",&estudiante[i].notas.nota1);
	printf("\nNota 2. ");
	scanf("%f",&estudiante[i].notas.nota2);
	printf("\nNota 3. ");
	scanf("%f",&estudiante[i].notas.nota3);	
	estudiante[i].totalProm=(estudiante[i].notas.nota1+estudiante[i].notas.nota2+estudiante[i].notas.nota3)/3;
	printf("\n<<<<<Mostrando Datos del Estudiante>>>>>>>\n");
	printf("Nombre: %s",estudiante[i].nombre);
	printf("\nSexo: %d",estudiante[i].sexo);
	printf("\nEdad: %s",estudiante[i].edad);
	printf("\nPromedio: %.1f",estudiante[i].totalProm);	
}
void estructuras6d(){
	int num,posMayor,posMenor;
	float pmayor=0.0;
	float pmenor=9.0;
	printf("\nIngrese cantidad de alumnos\n");
	scanf("%d",&num);
	printf("Ingrese datos del alumnos\n");
	for(int i=0;i<num;i++){
		printf("%i.Nombre: ",i+1);
		fflush stdin;
		fgets(estudiante[i].nombre,20,stdin);
		printf("\n%i.Edad: ",i+1);
		scanf("%d",&estudiante[i].edad);
		printf("\n%i.Sexo: ",i+1);
		fflush stdin;
		fgets(estudiante[i].sexo,20,stdin);
		printf("\n%i.Nota 1. ",i+1);
		scanf("%f",&estudiante[i].notas.nota1);
		printf("\n%i.Nota 2. ",i+1);
		scanf("%f",&estudiante[i].notas.nota2);
		printf("\n%i.Nota 3. ",i+1);
		scanf("%f",&estudiante[i].notas.nota3);	
		estudiante[i].totalProm=(estudiante[i].notas.nota1+estudiante[i].notas.nota2+estudiante[i].notas.nota3)/3;
		if(estudiante[i].totalProm>pmayor){
			pmayor=estudiante[i].totalProm;
			posMayor=i;
		}
		if(estudiante[i].totalProm<pmenor){
			pmenor=estudiante[i].totalProm;
			posMenor=i;
		}
	}
	printf("\n<<<<<Mostrando Datos>>>>>>>\n");
	printf("\nMayor Promedio\n");
	printf("Nombre:%s Edad:%d Sexo:%s Promedio:%.1f ",estudiante[posMayor].nombre,estudiante[posMayor].edad,estudiante[posMayor].sexo,estudiante[posMayor].totalProm);
	
	printf("\n\nMenor Promedio\n");
	printf("Nombre:%s Edad:%d Sexo:%s Promedio:%.1f ",estudiante[posMenor].nombre,estudiante[posMenor].edad,estudiante[posMenor].sexo,estudiante[posMenor].totalProm);	
}

