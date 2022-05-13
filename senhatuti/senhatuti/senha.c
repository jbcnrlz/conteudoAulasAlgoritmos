#include <stdio.h>
#include <string.h>

int main() {
	char senhaInterna[] = "comiapao";
	char senhaDigitada[20];
	printf("Digite a senha: ");
	scanf(" %20[^\n]", senhaDigitada);
	if (strcmp(senhaInterna, senhaDigitada) == 0) {
		printf("Senha correta! \n");
	} else {
		printf("Senha incorreta! \n");
	}
	return 0;
}