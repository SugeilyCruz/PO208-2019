// precision.cpp: define el punto de entrada de la aplicación de consola.
//

#include <stdio.h>
//#include 'stdafx.h'
#include <math.h>

//int _tmain(int argc, _TCHAR* argv[])
void main (void)
{
	char c;
	double d1, d2;
	float f1, f2;
	double sum1, sum2;

	//Todo recibe 0.9
	d1 = d2 = 0.9;
	f1 = f2 = 0.9;
	sum1 = sum2 = 0;

	//Mostramos el valor inciar
	printf("Valor inicial d1= %lf, d2=%lf, f1=%f, f2=%lf\n", d1, d2, f1, f2);
	//mostremos los valores en 10 incrementos de 0.9
	for (int iConta = 2; iConta <= 15; iConta++)
	{
		d1 = d1 + 0.9;	//Sumo 0.9
		d2 = 0.9 * iConta; //multiplico 0.9 
		sum1 = sum1 + pow(d1, iConta);
		sum2 = sum2 + pow(d2, iConta);

		f1 = f1 + 0.9;
		f2 = 0.9 * iConta;

		printf("d1= %15.12lf, d2=%15.12lf, f1=%15.12f, f2=%15.12lf\n", d1, d2, f1, f2);
	}

	//Ahora viene lo divertido
	printf("\n\n");
	if (d1 == d2)
		printf("Los double son iguales\n");
	else
		printf("Los double son diferentes. Hay una diferencia de %g\n", d1 - d2);

	if (f1 == f2)
		printf("Los float son iguales\n");
	else
		printf("Los float son diferentes. Hay una diferencia de %g\n", f1 - f2);

	printf("\n\n");


	printf("pow d1=%lf\n    d2=%lf\n    f1=%f\n    f2=%lf\n\n", pow(d1, 14), pow(d2, 14), pow(f1, 14), pow(f2, 14));
	printf("exp d1=%lf\n    d2=%lf\n    f1=%f\n    f2=%lf\n\n", exp(d1), exp(d2), exp(f1), exp(f2));

	printf("\n\n");
	if (sum1 == sum2)
		printf("Las sumas son iguales\n");
	else
		printf("Las sumas son diferentes. Hay una diferencia de %g\n", sum1 - sum2);


	printf("sumas sum1=%lf\n\n", sum1);
	printf("sumas sum2=%lf\n\n", sum2);

	printf("pulse <enter> para continuar");
	scanf_s("%c", &c);

	//return 0;
}

