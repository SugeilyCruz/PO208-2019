// Mate 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// formula y12= ((-(B / 2 * C) * x)) - (E / 2 * C) + (1 / (2 * C))*(sqrt(((B * B) - ((4 * (A * B)) * X)) + ((2 * (B * E)) - (4 * (C * D)) * x) + ((E * E) - 4 * (C * F))));

#include <iostream>
#include <math.h>

int main()
{
	float const PI = 3.1415926536;
	float discriminante;
	float angulo2, angulo4, angulo1, angulo;
	//float curva;
	//float radicando;
	float numero, equis;
	float x1, x2;
	float diametro, diametrox, diametroy;
	float A, B, C, D, E, F;
	printf("\t\tCOLOCA UN VALOR A CADA LETRA"); printf("\nA:"); scanf_s("%f", &A); printf("B:"); scanf_s("%f", &B); printf("C:"); scanf_s("%f", &C); printf("D:"); scanf_s("%f", &D); printf("E:"); scanf_s("%f", &E); printf("F:"); scanf_s("%f", &F); //printf("X:"); scanf_s("%f", &X);

	discriminante = ((B * B) - 4 * (A * C));
	equis = ((2 * (B * E)) - (4 * (C * D)));
	numero = ((E * E) - 4 * (C * F));
	diametrox = (-(-(E / 2 * C))) / (-(B / 2 * C));
	diametroy = (-(E / (2 * C)));
	diametro = ((-(B / (2 * C))) - (E / (2 * C)));
	//SACAR ANGULO, PASANDO RADIANES A GRADOS.
	angulo2 = B / (A - C);
	angulo1 = atan(angulo2);
	angulo4 = ((angulo1 * 180) / PI);
	angulo = 0.5 * angulo4;
	//printf("%f %f %f %f",angulo4, angulo2, angulo1, angulo);
	/*valores formula general.
	//curvagraf2 = ((((B * B) - (4 * (A * C))) * (Variable * Variable)) + (((2 * (B * E)) - (4 * (C * D))) * (Variable)) + ((E * E) - (4 * (C * F))));
	discriminante == a;
	equis == b;
	numero == c; */

	x1 = (-equis + (sqrt(equis * equis - 4 * discriminante * numero))) / (2 * discriminante);
	x2 = (-equis - (sqrt(equis * equis - 4 * discriminante * numero))) / (2 * discriminante);

	//............TABLAAAAAAA..........

	float diametrocurva;
	float Variable;
	float curvagraf;


	// EMPIEZA EL CODIGOOOOOOOOOOOOOO C:

	if (discriminante < 0)
	{
		printf("\n\tElipse");

		if (x1 != x2)
		{
			printf(" -Trinomio con raices reales- Elipse Real");

			printf("\n\tRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
			printf("\n\tFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
			printf("\n\tx1:%5.3f  x2:%5.3f", x1, x2);
			printf("\n\tInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

			//.................TABLA...........
			//empieza cuando variable sea mayor o igual a x1 y termina cuando variable sea menor o igual a x2, cada vez aumentara 0.25, variable
			//entra valiendo 0 y sale valiendo 0.25, vuelve entrar con 0.25, y sale 0.50 asi hasta que llegue a igualar x2

			//.................TABLA...........

			if (x1 < x2)
			{

				printf("\n\t\t TABLA DIAMETRO");

				Variable = 0;
				for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
				{

					diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
					printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

				}
			}
			else
			{
				printf("\n\t\t TABLA DIAMETRO");

				Variable = 0;
				for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
				{

					diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
					printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

				}
			}
			//.................Rotacion y giro.......
			printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
			printf("\nAngulo: %5.4f", angulo);






		}
		else
		{
			if (x1 == x2)
			{
				printf(" -Trinomio con raices dobles- Elipse Degenerada");
				printf("\n\tRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
				printf("\n\tFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
				printf("\n\tx1:%5.3f  x2:%5.3f", x1, x2);
				printf("\n\tInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

				//.................TABLA...........

				if (x1 < x2)
				{

					printf("\n\t\t TABLA DIAMETRO");

					Variable = 0;
					for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
					{

						diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
						printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

					}
				}
				else
				{
					printf("\n\t\t TABLA DIAMETRO");

					Variable = 0;
					for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
					{

						diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
						printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

					}
				}

				//.................Rotacion y giro.......
				printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
				printf("\nAngulo: %5.4f", angulo);

			}
			else
			{
				if (x1 < 0 || x2 < 0)
				{

					printf(" -Trinomio con raices complejas- Elipse Imaginaria");
					printf("\n\tRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
					printf("\n\tFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
					printf("\n\tx1:%5.3f  x2:%5.3f", x1, x2);
					printf("\n\tInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

					//.................TABLA...........

					if (x1 < x2)
					{

						printf("\n\t\t TABLA DIAMETRO");

						Variable = 0;
						for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
						{

							diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
							printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

						}
					}
					else
					{
						printf("\n\t\t TABLA DIAMETRO");

						Variable = 0;
						for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
						{

							diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
							printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

						}
					}




					//.................Rotacion y giro.......
					printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
					printf("\nAngulo: %5.4f", angulo);

				}
			}
		}
	}
	else
	{
		if (discriminante == 0)
		{
			printf("\n\t\tParabola");

			if (equis != 0)
			{
				printf(" -Binomio o Monomio con un termino en x- Parabola Real");
				printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
				printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
				printf("\nx1;%5.3f  x2;%5.3f", x1, x2);
				printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

				//.................TABLA...........

				if (x1 < x2)
				{

					printf("\n\t\t TABLA DIAMETRO");

					Variable = 0;
					for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
					{

						diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
						printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

					}
				}
				else
				{
					printf("\n\t\t TABLA DIAMETRO");

					Variable = 0;
					for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
					{

						diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
						printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

					}
				}




				//.................Rotacion y giro.......
				printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
				printf("\nAngulo: %5.4f", angulo);
			}
			else
			{
				if (equis == 0)
				{
					printf(" -Sin termino en x-");

					if (numero > 0)
					{
						printf("\t\t 2 Rectas Paralelas");
						printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
						printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
						//printf("\nx1;%5.3f  x2;%5.3f", x1, x2);
						printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);
						//.................TABLA...........

						if (x1 < x2)
						{

							printf("\n\t\t TABLA DIAMETRO");

							Variable = 0;
							for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
							{

								diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
								printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

							}
						}
						else
						{
							printf("\n\t\t TABLA DIAMETRO");

							Variable = 0;
							for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
							{

								diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
								printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

							}
						}




						//.................Rotacion y giro.......
						printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
						printf("\nAngulo: %5.4f", angulo);

					}
					else
					{
						if (numero == 0)
						{
							printf(" 2 Rectas coincidientes");
							printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
							printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
							//printf("\nx1;%5.3f  x2;%5.3f", x1, x2);
							printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

							//.................TABLA...........

							if (x1 < x2)
							{

								printf("\n\t\t TABLA DIAMETRO");

								Variable = 0;
								for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
								{

									diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
									printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

								}
							}
							else
							{
								printf("\n\t\t TABLA DIAMETRO");

								Variable = 0;
								for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
								{

									diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
									printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

								}
							}



							//.................Rotacion y giro.......
							printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
							printf("\nAngulo: %5.4f", angulo);

						}
						else
						{
							if (numero < 0)
							{
								printf(" Parabola Imaginaria");
								printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
								printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
								//printf("\nx1;%5.3f  x2;%5.3f", x1, x2);
								printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);
								//.................TABLA...........

								if (x1 < x2)
								{

									printf("\n\t\t TABLA DIAMETRO");

									Variable = 0;
									for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
									{

										diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
										printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

									}
								}
								else
								{
									printf("\n\t\t TABLA DIAMETRO");

									Variable = 0;
									for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
									{

										diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
										printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

									}
								}




								//.................Rotacion y giro.......
								printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
								printf("\nAngulo: %5.4f", angulo);
							}
						}
					}
				}
			}
		}
		else
		{
			if (discriminante > 0)
			{
				printf("\n\t\tHiperbola");

				if (x1 != x2)
				{
					printf(" -Trinomio con raices reales- Hiperbola que corta al diametro");

					printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
					printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
					printf("\nx1:%5.3f  x2:%5.3f", x1, x2);
					printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

					//.................TABLA...........

					if (x1 < x2)
					{

						printf("\n\t\t TABLA DIAMETRO");

						Variable = 0;
						for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
						{

							diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
							printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

						}
					}
					else
					{
						printf("\n\t\t TABLA DIAMETRO");

						Variable = 0;
						for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
						{

							diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
							printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

						}
					}

					//.................Rotacion y giro.......
					printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
					printf("\nAngulo: %5.4f", angulo);


				}
				else
				{
					if (x1 == x2)
					{
						printf(" -Trinomio con raices dobles- Hiperbola que degenera en dos rectas que se cortan");
						printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
						printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
						printf("\nx1:%5.3f  x2:%5.3f", x1, x2);
						printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

						//.................TABLA...........

						if (x1 < x2)
						{

							printf("\n\t\t TABLA DIAMETRO");

							Variable = 0;
							for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
							{

								diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
								printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

							}
						}
						else
						{
							printf("\n\t\t TABLA DIAMETRO");

							Variable = 0;
							for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
							{

								diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
								printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

							}
						}

						//.................Rotacion y giro.......
						printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
						printf("\nAngulo: %5.4f", angulo);

					}
					else
					{
						if (x1 < 0 || x2 < 0)
						{
							printf(" -Trinomio con raices complejas- Hiperbola que no corta al diametro");
							printf("\nRadicando: %5.2f%c%c %5.2f%c %5.2f", discriminante, 88, 253, equis, 88, numero);
							printf("\nFORMULA GENERAL : (-%.0f%c(%.0f%c-4*%.0f*%.0f)%c)/2*%.0f", equis, 241, equis, 253, discriminante, numero, 171, discriminante);
							printf("\nx1:%5.3f  x2:%5.3f", x1, x2);
							printf("\nInclinacion de la curva: (%.1f,%c) (%c,%.1f)", diametrox, 48, 48, diametroy);

							//.................TABLA...........

							if (x1 < x2)
							{

								printf("\n\t\t TABLA DIAMETRO");

								Variable = 0;
								for (Variable >= x1; Variable <= x2; Variable = Variable + 0.25)
								{

									diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
									printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

								}
							}
							else
							{
								printf("\n\t\t TABLA DIAMETRO");

								Variable = 0;
								for (Variable >= x2; Variable <= x1; Variable = Variable + 0.25)
								{

									diametrocurva = (((-(B / (2 * C))) * Variable) - (E / (2 * C)));
									printf("\n%5.2f", Variable); printf(" *"); printf(" (((-(B / (2 * C))) * %5.2f) - (E / (2 * C)))", Variable); printf(" ="); printf("%5.1f", diametrocurva);

								}
							}




							//.................Rotacion y giro.......
							printf("\n\t\tROTACION O GIRO DE EJES EN LAS CURVAS CONICAS");
							printf("\nAngulo: %5.4f", angulo);

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
