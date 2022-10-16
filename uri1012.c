// Luan Marcelino de Souza
// Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int main() {
	double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

	scanf("%lf %lf %lf", &a, &b, &c);
	
	triangulo = a*c/2.0;
	circulo = pi*pow(c,2);
	trapezio = (a+b)*c/2.0;
	quadrado = pow(b,2);
	retangulo = a*b;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

	return 0;
}
