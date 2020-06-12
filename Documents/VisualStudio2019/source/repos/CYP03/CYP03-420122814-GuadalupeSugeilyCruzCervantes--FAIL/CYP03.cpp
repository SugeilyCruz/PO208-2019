// CYP03.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>

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
			if (dia == 29 && mes == 2) {
				printf("%i %i %i", dia = 1, mes + 1, anio);
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
							printf("%i %i %i ", dia, mes + 1, anio);
						}
						else {
							printf("%i %i %i", dia + 1, mes, anio);
						}
					}
				}
				else
				{
					if (mes == 4 || mes == 6 || mes == 9 || mes == 11 || mes== 2) {
						if (dia == 30) {
							dia = 1;
							printf("%i %i %i", dia, mes + 1, anio);
						}
					}
				}
			}
		}
	}
}






 

