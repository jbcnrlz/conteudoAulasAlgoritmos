#include <stdio.h>

float calculaSalario(float valorHoraAula, float horasTrabalhadas, float percentualDesconto) {
	float salarioBruto = 0.0, salarioLiquido = 0.0;
	salarioBruto = valorHoraAula * horasTrabalhadas;
	percentualDesconto = percentualDesconto / 100;
	salarioLiquido = salarioBruto - (salarioBruto * percentualDesconto);
	return salarioLiquido;
}


int main() {
	float vha = 0.0, qha = 0.0, pd=0.0,sl=0.0;
	printf("Digite o valor da hora aula: ");
	scanf("%f", &vha);
	printf("Digite quantidade de aulas ministradas: ");
	scanf("%f", &qha);
	printf("Digite o percentual de desconto (digite em %%): ");
	scanf("%f", &pd);
	sl = calculaSalario(vha,qha,pd);
	printf("Seu salario liquido = %.2f \n", sl);
	return 0;
}