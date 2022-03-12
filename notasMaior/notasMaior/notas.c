#include <stdio.h>

int main() {
	float n1 = 0.0, n2 = 0.0;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	if (n1 > n2) {
		printf("N1 eh a maior nota!\n");
	} else if (n1 == n2) {
		printf("As duas notas sao iguais!\n");
	} else {
		printf("N2 eh a maior nota!\n");
	}
	return 0;
}