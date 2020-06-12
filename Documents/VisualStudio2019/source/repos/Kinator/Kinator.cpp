// Kinator.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{ 
	//Hacer un programa jrege Kinator
	char c;

	printf("Es mujer [S/N]");
	scanf_s("%c", &c);

	if (c == 's')
		//es correcto porque solo hay un caracter almacenado en una variable.
	{
		printf("Es la Viuda Negra");
	}
	else
	{
		printf("Es ingeniero");
		c = getc(stdin);

		if (c == 's')
		{
			printf("Es Ironman");
		}
		else
		{
			printf("Tiene un martillo");
			c = getc(stdin);
			//torupper convierte todo a Mayusculas
			if (toupper(c) == 's')
			{
				printf("Es Thor");

			}
			else
			{
				printf(" Es verde");
				c = getc(stdin);
				if (tolower(c) == 's')
					//si solo tengo una setencia, no es necesario poner las llaves.
				{
					printf("Es Hulk");
				}
				else
				{
					printf("Es el Cap");
				}
			}
		}
	}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
