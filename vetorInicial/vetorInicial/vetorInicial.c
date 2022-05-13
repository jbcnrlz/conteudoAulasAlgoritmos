#include <stdio.h>

int main() {
	int numeros[10];
	for (int i = 0; i < 10; i += 2) {
		numeros[i] = 0; //Salva dentro da posicao i do vetor numeros i + 1
	}
	for (int i = 0; i < 10; i += 1) {
		printf("numeros[%d] = %d\n",i,numeros[i]);
	}
	printf("\n");
	return 0;
}