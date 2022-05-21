/*Faça uma programa que “corte” uma string, 
recebendo como parâmetros a string, o índice inicial e o tamanho do corte.
Se passar para ela “Ola mundo!” com os valores 4 e 5 ela retorne “mundo”.
*/
#include<stdio.h>
#include<string.h>

int main() {
	char frase[100], substring[100];
	int idxInicial = 0, tamanho=0;
	printf("Digite a frase: ");
	scanf(" %100[^\n]", frase);
	printf("Digite o indice inicial (comecando por 0): ");
	scanf("%d", &idxInicial);
	printf("Digite o tamanho do corte: ");
	scanf("%d", &tamanho);
	int idxFrase = idxInicial, idxCopia=0;
	while ( (tamanho > 0) && (idxFrase < strlen(frase)) ) {
		substring[idxCopia] = frase[idxFrase];
		idxFrase += 2;
		idxCopia += 1;
		tamanho -= 1;
	}
	substring[idxCopia] = '\0';
	printf("%s \n", substring);
	return 0;
}