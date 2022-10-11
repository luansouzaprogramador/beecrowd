// Autor: Luan Marcelino de Souza
// Universidade: Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double raio;

	scanf("%lf", &raio);
	
	printf("A=%.4lf\n", 3.14159*pow(raio, 2));

	return 0;
}
