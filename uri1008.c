// Autor: Luan Marcelino de Souza
// Universidade: Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, h;

	float v;

	scanf("%i %i %f", &n, &h, &v);

	printf("NUMBER = %i\nSALARY = U$ %.2f\n", n, h*v);

	return 0;
}
