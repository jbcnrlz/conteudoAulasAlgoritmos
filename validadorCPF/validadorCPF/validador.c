#include <stdio.h>

int main() {
	int d1 = 0,d2 = 0,d3 = 0,d4 = 0,d5 = 0,d6 = 0,d7 = 0,d8 = 0,d9 = 0,dv1 = 0,dv2 = 0;
	printf("Digite o seu CPF: ");
	scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
	dv1 = (d1 * 10) + (d2 * 9) + (d3 * 8) + (d4 * 7) + (d5 * 6) + (d6 * 5) + (d7 * 4) + (d8 * 3) + (d9 * 2);
	dv1 = dv1 * 10;
	dv1 = dv1 % 11;
	dv2 = (d1 * 11) + (d2 * 10) + (d3 * 9) + (d4 * 8) + (d5 * 7) + (d6 * 6) + (d7 * 5) + (d8 * 4) + (d9 * 3) + (dv1 * 2);
	dv2 = dv2 * 10;
	dv2 = dv2 % 11;
	printf("Primeiro digito = %d - Segundo digito = %d \n", dv1, dv2);
	return 0;
}