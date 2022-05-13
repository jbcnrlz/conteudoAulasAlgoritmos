#include <stdio.h>

#define N_ALUNOS 40

int main() {
	float notas[N_ALUNOS][5];
	char nomes[N_ALUNOS][100];
	for (int j = 0; j < N_ALUNOS; j++) {
		printf("Digite o nome do aluno: ");
		scanf(" %100[^\n]", nomes[j]);
		notas[j][4] = 0;
		for (int i = 0; i < 4; i += 1) {
			printf("Digite a nota: ");
			scanf("%f", &notas[j][i]);
			notas[j][4] = notas[j][4] + (notas[j][i] / 4.0);
		}
	}
	printf("\nNotas e medias da sala: \n");	
	for (int j = 0; j < N_ALUNOS; j++) {
		printf("============================\n");
		printf("%s \n", nomes[j]);
		for (int i = 0; i < 4; i++) {
			printf("Nota %d = %.2f \n", i + 1, notas[j][i]);
		}
		printf("Media = %.2f \n", notas[j][4]);
	}
	return 0;
}