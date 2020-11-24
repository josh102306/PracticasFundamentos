/* Practica 7                            Hernández Pacheco Ali Joshua
Fecha de entrega: 23/11/2020
*/


//Seccion de biblierías que se usarán en el código
#include<stdio.h>

//Declaración de variables globales
 int edadDelAlumno;
 int edades;
 	float operacion;

//Declaración de funciones 
int main() {
	//Declaración de variables locales
	int edadDelAlumno2=21;  
	int edades;
	float operacion;
	//bloque de instrucciones 
	printf("Escribe tu edad:");
	scanf("%i",&edades);
	operacion=edades+55;
	printf("tu edad mas 55:\n %f",operacion); 
	return 0; 
 } 
 
