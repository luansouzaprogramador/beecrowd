// Luan Marcelino de Souza
// Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int main() {
	double raio, volume;
	
	scanf("%lf", &raio);
	volume = (4.0/3.0)*pi*pow(raio,3);

	printf("VOLUME = %.3lf\n", volume);

	return 0;
}
