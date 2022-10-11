// Autor: Luan Marcelino de Souza
// Universidade: Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>

int main() {
	int c1, n1, c2, n2;
	float v1, v2;

	scanf("%i %i %f %i %i %f", &c1, &n1, &v1, &c2, &n2, &v2);

	printf("VALOR A PAGAR: R$ %.2f\n", n1*v1+n2*v2);

	return 0;
}
