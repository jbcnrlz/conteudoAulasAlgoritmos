#include <stdio.h>

int main() {
	char nome[100];
	double salFixo = 0;
	double totalVendas = 0;
	double valorFinal = 0;
	scanf(" %100[^\n]", nome);
	scanf("%lf", &salFixo);
	scanf("%lf", &totalVendas);
	valorFinal = salFixo + (totalVendas * 0.15);
	printf("TOTAL = R$ %.2lf\n", valorFinal);
	return 0;
}