#include <stdio.h>

int main() {
	float salario = 0.0;
	float salarioReajustado = 0.0;
	float porcentage = 0.0;
	printf("Amigao, me digita seu salario na tranquilidade: ");
	scanf("%f",&salario);
	if (salario < 500) {
		porcentage = 1.15;
	} else if (salario <= 1000) {
		porcentage = 1.1;
	} else {
		porcentage = 1.05;
	}
	salarioReajustado = salario * porcentage;
	printf("Seu salario reajustado eh de -> %.2f\n", salarioReajustado);
	return 0;
}