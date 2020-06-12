// CYP01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	//variable de ancho y largo
	int ancho;

	int largo;

	//variable de coordenadas x y x
	float x;
	float y;

	//variable de porcentaje ancho y largo
	float porcentajeA;
	float porcentajeL;

	//variable coordenadas de X y Y  de mi esquina superior IZQ
	int coordenadaizqX;
	int coordenadaizqY;
	//variable coordenadas de X y Y  de mi esquina superior DER
	int coordenadaderX;
	int coordenadaderY;


	scanf_s("%i", &ancho);

	scanf_s("%i", &largo);

	scanf_s("%f", &x);

	scanf_s("%f", &y);

	scanf_s("%f", &porcentajeA);

	scanf_s("%f", &porcentajeL);

	coordenadaizqX = (int)ancho * x;

	coordenadaizqY = (int)largo * y;

	coordenadaderX = (int)ancho * porcentajeA + coordenadaizqX;

	coordenadaderY = (int)largo * porcentajeL + coordenadaizqY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, largo, x, y, porcentajeA, porcentajeL, coordenadaizqX, coordenadaizqY, coordenadaderX, coordenadaderY);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
