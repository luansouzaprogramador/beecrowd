// Luan Marcelino de Souza
// Centro Federal de Educacao Tecnologica de Minas Gerais

#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[100];
	double salario, vendas;

	scanf("%s %lf %lf", nome, &salario, &vendas);

	salario += 0.15*vendas;
	
	printf("TOTAL = R$ %.2f\n", salario);

	return 0;
}
