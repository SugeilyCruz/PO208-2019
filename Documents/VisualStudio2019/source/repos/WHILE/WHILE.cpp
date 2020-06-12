// WHILE.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int numero;
	int contador;

	printf("Numero asteriscos:");
	scanf_s("%d", &numero);

	
	contador = 1;

	while (contador <= numero)
	{
		printf("\n*");
		contador = contador + 1; //el codigo no es estatico, implica timepo.
	}
	printf("\n");
	
	//VERSION 2
	//contador = 1;
	//while (contador++ <= numero) //comparar, incrementas e imprimes. (++contador<=numero) incrementa, compara e imprime.
	//{
	//	printf("*");

	//}

//VERSION 3
 //while(contador=contador+1 <+numero)//primero realiza el incremento, lo asigna y luego realiza la comparacion. ==(compara) =(asigna
	 /* el valor)
	 x=0
	 if(x==1)
	 {
	 printf("1");
	 }
	 else
	 {
	 printf("0");
	 }
	 */


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
