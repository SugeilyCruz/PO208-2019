// IMPUESTOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#define DFORE 5 // porciento

int main()
{
	float sueldobruto;
	float impuesto;
	float afore;
	float personales;
	float neto;
	float total;

	printf("Inserta tu sueldo: ");
	scanf_s("%f", &sueldobruto);

	impuesto = sueldobruto * 0.33;

	printf("\n Impuestos sobre la renta: \f   %7.2f", impuesto);

	afore = sueldobruto * DFORE / 100; 
	printf("\n Aportacion a la afore: \f      %7.2f", afore);

	personales = sueldobruto * 0.02;
	printf("\n Impuestos personales: \f      %7.2f", personales);

	total = impuesto + afore + personales;
	printf("\nTotal de impuesto: \f          %7.2f", total);

	neto = sueldobruto - total;

	printf("\n\nSueldo neto: \f              %7.2f", neto);
	


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
