// PROYECTO 4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int main()
{
	float venta; //Aqui se almacena el producto de la venta
	float pago;
	float  cambio;


// lee Venta
	printf("venta: ");
	scanf_s("%f", &venta);
	//Lee Pago
	printf("pago: ");
	scanf_s("%f", &pago);
	//Pide Pago
	//Lee Pago
	//Calcular el cambio
	cambio = pago - venta ;
	float raiz = sqrt(cambio);

	//Mostrar el cambio
	printf("el cambio es $%5.2f %f " , cambio , raiz); 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
