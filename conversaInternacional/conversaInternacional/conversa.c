#include <stdio.h>
#include <string.h>

int main() {
	int casos = 0;
	scanf("%d", &casos);
	while (casos > 0) {
		int pessoas = 0;
		scanf("%d", &pessoas);
		char pIdioma[50];
		scanf(" %50[^\n]", pIdioma);
		int idiomasDiferentes = 0;
		pessoas -= 1;
		while (pessoas > 0) {
			char proximosIdiomas[50];
			scanf(" %50[^\n]", proximosIdiomas);
			if (strcmp(pIdioma, proximosIdiomas) != 0) {
				idiomasDiferentes = 1;
			}
			pessoas -= 1;
		}
		if (idiomasDiferentes == 1) {
			printf("ingles\n");
		} else {
			printf("%s\n", pIdioma);
		}
		casos -= 1;
	}
	return 0;
}