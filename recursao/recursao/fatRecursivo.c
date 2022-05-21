#include <stdio.h>

void fibonacci(int atual, int anterior, int limite){
	int proixmo = atual + anterior;
	if (proixmo <= limite) {
		printf(" %d", proixmo);
		fibonacci(proixmo, atual, limite);
	}
}

int fatorial(int numero){
	if (numero == 0) {
		return 1;
	} else {
		return numero * fatorial(numero - 1);
	}
}

int main() {
	int n = 0;
	printf("Digite o numero limite: ");
	scanf("%d", &n);
	printf("1");
	fibonacci(1, 0, n);
	return 0;
}