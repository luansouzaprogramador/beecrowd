// Autor: Luan Marcelino de Souza
// Universidade: Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>

int main() {
	double a, b, c;
	
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("MEDIA = %.1lf\n", (a*2+b*3+c*5)/10.0);

	return 0;
}
