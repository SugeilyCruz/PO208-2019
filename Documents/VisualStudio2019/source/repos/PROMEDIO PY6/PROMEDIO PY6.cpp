// PROMEDIO PY6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int main()
{
	float calificacion1;
	float calificacion2;
	float calificacion3;
	float promedio;
	float suma;

	printf("calificacion1: ");
	scanf_s("%f", &calificacion1 );

	printf("calificacion2: ");
	scanf_s("%f", &calificacion2 );

	printf("calificacion3: ");
	scanf_s("%f", &calificacion3 );

	suma = calificacion1 + calificacion2 + calificacion3;
	promedio = suma / 3;



	printf("El promedio total: %2.1f", promedio);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
