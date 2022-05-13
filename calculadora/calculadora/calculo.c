#include <stdio.h>
#include <stdlib.h>

int main() {
	char continuar = 'S';
	while (continuar == 'S') {
		float n1 = 0.0, n2 = 0.0, result = 0.0;
		char op = ' ';
		scanf("%f %c %f", &n1, &op, &n2);
		if (op == '+') {
			result = n1 + n2;
		} else if (op == '-') {
			result = n1 - n2;
		} else if (op == '*') {
			result = n1 * n2;
		} else if (op == '/') {
			if (n2 != 0) {
				result = n1 / n2;
			} else {
				printf("OPA, PODE DIVIR POR 0 NAO!!! \n");
			}
		} else {
			printf("OP INVALIDA!!!!!! \n");
		}
		printf(" = %f \n", result);
		printf("Deseja continuar fazendo contas? (S para sim, N para nao) ");
		scanf(" %c", &continuar);
		system("cls");
	}
	return 0;
}