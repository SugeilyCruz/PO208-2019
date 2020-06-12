// mate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// Grafica de la Hiperbola
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;
const int ANCHO = 720, ALTO = 720;

/*****************************************************************************************************************************/
void dibujarLinea(int moverX, int moverY, int dibujarX, int dibujarY, int color, int textoX, int textoY, char* nombre) {
	moveto(moverX, moverY);
	setcolor(color);
	lineto(dibujarX, dibujarY);
	outtextxy(textoX, textoY, nombre);
}
/*****************************************************************************************************************************/
void dibujarHiperbolaHorizontal(float h, float k, float a, float b) {
	float x, y1, y2;
	for (x = -360; x <= 360; x += 0.01) {
		y1 = ((sqrt(-(pow(a, 2) * pow(b, 2) - pow(b, 2) * pow(x - h, 2)) / pow(a, 2)) + k));
		y2 = ((-sqrt(-(pow(a, 2) * pow(b, 2) - pow(b, 2) * pow(x - h, 2)) / pow(a, 2)) + k));
		putpixel(360 + x, 360 - y1, YELLOW);
		putpixel(360 + x, 360 - y2, YELLOW);
	}
}
/*****************************************************************************************************************************/
void dibujarHiperbolaVertical(float h, float k, float a, float b) {
	float x, y1, y2;
	for (x = -360; x <= 360; x += 0.01) {
		y1 = ((sqrt((pow(a, 2) * pow(b, 2) + pow(a, 2) * pow(x - h, 2)) / pow(b, 2)) + k));
		y2 = ((-sqrt((pow(a, 2) * pow(b, 2) + pow(a, 2) * pow(x - h, 2)) / pow(b, 2)) + k));
		putpixel(360 + x, 360 - y1, YELLOW);
		putpixel(360 + x, 360 - y2, YELLOW);
	}
}
/*****************************************************************************************************************************/
void pintarPlano() {
	//Inicia la ventana
	initwindow(ANCHO, ALTO);

	//Pinta los ejes en la ventana
	dibujarLinea(0, ALTO / 2, ANCHO, ALTO / 2, WHITE, ANCHO - 20, ALTO / 2 + 10, "X");
	dibujarLinea(ANCHO / 2, 0, ANCHO / 2, ALTO, WHITE, ANCHO / 2 + 10, 0, "Y");
}
/*****************************************************************************************************************************/
int main() {
	float a, b, h, k;
	int tipo;
	cout << " Grafica de la Hiperbola" << endl;
	cout << " Ingrese h : ";
	cin >> h;
	cout << " Ingrese k : ";
	cin >> k;
	cout << " Ingrese a : ";
	cin >> a;
	cout << " Ingrese b : ";
	cin >> b;
	cout << " [1].Vertical " << endl;
	cout << " [2].Horizontal " << endl;
	cin >> tipo;
	switch (tipo) {
	case 1:
		pintarPlano();
		dibujarHiperbolaVertical(h, k, a, b);
		break;
	case 2:
		pintarPlano();
		dibujarHiperbolaHorizontal(h, k, a, b);
		break;
	}
	getch();
	closegraph();
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
