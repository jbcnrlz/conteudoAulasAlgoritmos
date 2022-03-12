#include <stdio.h>

int main() {
	char sexo = ' ';
	scanf(" %c", &sexo);
	if ((sexo == 'm') || (sexo == 'f')) {
		printf("Valor valido!\n");
	} else {
		printf("Valor invalido!\n");
	}
	return 0;
}