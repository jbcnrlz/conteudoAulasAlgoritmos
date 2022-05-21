#include <stdio.h>
#include <string.h>

int main() {
	int repeticoes = 0;
	scanf("%d", &repeticoes);
	while (repeticoes > 0) {
		char frase[50];
		scanf(" %50[^\n]", frase);
		int flagEspaco = 0;
		for (int i = 0; i < strlen(frase); i++) {
			if ((i == 0) && (frase[i] != ' ')) {
				printf("%c", frase[i]);
			} else if (frase[i] == ' ') {
					flagEspaco = 1;
			} else if (flagEspaco == 1) {
					printf("%c", frase[i]);
					flagEspaco = 0;
			}
		}
		printf("\n");
		repeticoes -= 1;
	}
	return 0;
}