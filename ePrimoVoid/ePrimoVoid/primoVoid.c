#include <stdio.h>
/*
void ehPrimo(int numeroMaximo,int *resultado){
	*resultado = 0;
	for (int divdendo = 2; divdendo < numeroMaximo; divdendo += 1) {
		if ((numeroMaximo % divdendo) == 0) {
			*resultado = 1;
			break;
		}
	}
}

void main() {
	int limite = 0;
	printf("Ate qual numero? ");
	scanf("%d", &limite);
	for (int numeroAtual = 2; numeroAtual <= limite; numeroAtual += 1) {
		int isPrimo;
		ehPrimo(numeroAtual,&isPrimo);
		if (isPrimo == 0) {
			printf("%d eh primo!\n", numeroAtual);
		} else {
			printf("%d nao eh primo!\n", numeroAtual);
		}
	}
}
*/

void referenciaValor(int *r, int v) {
	printf("Valor antes  (drento) = %d e %d\n", *r, v);
	*r = 1000000;
	v = 10;
	printf("Valor depois (drento) = %d e %d\n", *r, v);
}

int main() {
	int doMainV = 500, doMainRef = 10;
	printf("Antes chamada = %d e %d\n", doMainRef, doMainV);
	referenciaValor(&doMainRef, doMainV);
	printf("Depois chamada = %d e %d\n", doMainRef, doMainV);
	return 0;
}


