// CYP04.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
	double incremento, inicial, final, e, factorial, suma;
	int i, j, k;


	scanf_s("%lf %lf %lf", &inicial, &final, &incremento);

	if (inicial < final)
		if (incremento > 0.0)

			e = inicial;
	i = int((final - inicial) / incremento);


	for (j = 0; j <= i; j++)
	{
		factorial = 1;
		suma = 1.0;
		for (k = 1; k <= i; k++)
		{
			factorial *= k;
			suma += pow(e, k) / factorial;
		}
		printf("%lf %lf %lf\n", e, suma, exp(e));
		e += incremento;
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
