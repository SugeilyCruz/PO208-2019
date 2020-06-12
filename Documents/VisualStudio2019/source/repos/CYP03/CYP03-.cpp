
// CYP03-.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int dia;
	int mes;
	int anio;

	scanf_s("%i %i %i", &dia, &mes, &anio);

	if (anio >= 0 && anio <= 3000)
	{
		if (anio % 400 == 0)
		{
			if (mes > 0 && mes <= 12)
			{
				if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
				{
					if (dia > 0 && dia <= 31)
					{
						if (dia == 31)
						{
							dia = 1;
							printf("%2i %2i %4i", dia, mes + 1, anio);
						}
						else {
							printf("%2i %2i %4i", dia + 1, mes, anio);
						}
					}

				}
				else {

					if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
					{
						if (dia > 0 && dia <= 31)
						{
							if (dia == 30)
							{
								dia = 1;
								printf("%2i %2i %4i", dia, mes + 1, anio);
							}
							else {
								printf("%2i %2i %4i", dia + 1, mes, anio);
							}
						}
					}
					else
					{
						if (mes == 2)
						{
							if (dia == 29 && mes == 2) {
								printf("%2i %2i %4i", dia = 1, mes + 1, anio);
							}
							else
							{
								printf("%2i %2i %4i", dia + 1, mes, anio);
							}
						}
					}
				}
			}
		}
		else
		{
			if (mes > 0 && mes <= 12)
			{
				if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
				{
					if (dia > 0 && dia <= 31)
					{
						if (dia == 31)
						{
							dia = 1;
							printf("%2i %2i %4i", dia, mes + 1, anio);
						}
						else {
							printf("%2i %2i %4i", dia + 1, mes, anio);
						}
					}


				}
				else
				{

					if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
					{

						if (dia > 0 && dia <= 31)
						{
							if (dia == 30)
							{
								dia = 1;
								printf("%2i %2i %4i", dia, mes + 1, anio);
							}
							else {
								printf("%2i %2i %4i", dia + 1, mes, anio);
							}
						}

					}
					else
					{
						if (mes == 2)
						{
							if (dia == 28 && mes == 2) 
							{
								printf("%2i %2i %4i", dia = 1, mes + 1, anio);
							}
							else
							{
								printf("%2i %2i %4i", dia + 1, mes, anio);
							}
						}
					}
				}
			}

		}

	}

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
