#include <stdio.h>
#include <string.h>

int main() {
	char nome[100];
	char sobrenome[100];
	printf("Digite seu nome: ");
	scanf(" %100[^\n]", nome);
	printf("Digite seu sobrenome: ");
	scanf(" %100[^\n]", sobrenome);

	printf("Tamanho do nome -> %d \n", strlen(nome));
	printf("Tamanho do sobrenome -> %d \n", strlen(sobrenome));

	char nomeCompleto[200];
	strcpy(nomeCompleto, nome);
	strcat(nomeCompleto, " ");
	strcat(nomeCompleto, sobrenome);
	printf("Meu nome -> %s \n", nomeCompleto);

	return 0;
}