// CYP03--.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int dia;
	int mes;
	int ano;
	int dia_siguiente;
	int mes_siguiente;
	int ano_siguiente;

	scanf_s("%i", &dia);

	scanf_s("%i", &mes);

	scanf_s("%i", &ano);
	{

		if ((dia == 28 && mes == 2) || (dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || dia == 31) dia_siguiente = 1;
		else
			dia_siguiente = dia + 1;
		if (dia_siguiente == 1)
			mes_siguiente = mes + 1;
		else
			mes_siguiente = mes;
		if (mes_siguiente == 13)
			ano_siguiente = ano + 1;
		else
			ano_siguiente = ano;
		if (mes_siguiente == 13)
			mes_siguiente = 1;
	}
	if (ano == 400 || ano == 800 || ano == 1200 || ano == 1600 || ano == 2000 || ano == 2400 || ano == 2800)
	{
		if (dia == 28 && mes == 2)
		{
			dia_siguiente = dia + 1;
			mes_siguiente = mes;
		}
		if (dia == 29 && mes == 2)
		{
			dia_siguiente = 1;
			mes_siguiente = mes + 1;
		}
	}


	printf("%2.0i %2.0i %4.0i", dia_siguiente, mes_siguiente, ano_siguiente);

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
