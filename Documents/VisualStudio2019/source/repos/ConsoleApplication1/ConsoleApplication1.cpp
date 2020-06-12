
#include <stdio.h>
#include <stdlib.h>
int i, j, aux, n;

int main(int argc, char* argv[])
{

	// aqui declaramosnuestro arreglo con el numero que nos dieron anteriormente
	int A[3][3];
	//	ahora tenemos que recabar el valor de cada uno de nuestros arreglos reordemos que ponemos la i adentro de nuestros corchetes por que cada que de una vuelta el for pcupara uno de nuestros espacios
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t ingrese el valor de la matriz en la coordenada %i,%i : ", i, j);
			scanf("%i", &A[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{

			printf("\t %i \t ", A[i][j]);
		}
		printf("\n");
	}







	system("pause");
	return 0;
}