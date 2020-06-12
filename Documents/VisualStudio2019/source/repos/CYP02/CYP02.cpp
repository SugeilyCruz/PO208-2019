// CYP02.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>



int main()
{
	int Tamano;
	int Posicion;


	int tamanohexa;
	int posicionhexa;

	int cero1;
	int cero2;

	cero1 = 0000;

	cero2 = 0000;

	scanf_s("%i", &Tamano);
	scanf_s("%i", &Posicion);

	tamanohexa = Tamano;
	posicionhexa = Posicion;

	

	printf("%c%c%08X%04i%04i%08X", 66, 77, tamanohexa, cero1, cero2, posicionhexa);
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
