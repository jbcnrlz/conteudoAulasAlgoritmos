#include <stdio.h>

int main() {
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0;
	float media = 0.0;
	printf("Digite a primeira nota: "); //Mostra mensagem
	scanf("%f", &n1); //Le o valor digitado e armazena na variavel N1
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4.0;
	printf("Media = %.2f\n", media);
	return 0;
}