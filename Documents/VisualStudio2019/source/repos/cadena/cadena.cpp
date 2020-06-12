// cadena.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>


int main()
{
	char oracion[81];
	printf("Escribe una oracion: ");

	gets_s(oracion); //scanf("%s", oracion);

    fflush(stdin); //limpia la entrada en el teclado

	/*
	int edad = 0;
	printf("Escribe una oracion: ");
	gets_s(edad)
    gets_s(oracion)*/

	printf("CAdena:%s", oracion); 


	char s1[10];
	char s2[10];
	printf("\nEscribe la primer cadena:");
	gets_s(s1);
	fflush(stdin);
	printf("\nEscribe la segunda cadena:");
	gets_s(s2);
	fflush(stdin);
	int resultado = strcmp(s1, s2);
	if (resultado == 0)
	{
		printf("\nSon iguales");
		printf("\nLa cadena 1 tiene %d caracteres",strlen(s1));
        printf("\nLa cadena 2 tiene %d caracteres", strlen(s2));
		strcat_s(s1,s2);
		printf("\nLa cadena resultante: %s", s1);
	}
	else
	{
		printf("\nno son iguales");
		printf("\nLa cadena 1 tiene %d caracteres", strlen(s1));
		printf("\nLa cadena 2 tiene %d caracteres", strlen(s2));
		
	}

	char cad1[10];
	char cad2[20];

	printf("\nIntroduce una Cadena:");
	gets_s(cad1);
	strcpy_s(cad2, cad1);
	printf("cad1: %s cad2: %s", cad1, cad2);

	


	return 0;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
