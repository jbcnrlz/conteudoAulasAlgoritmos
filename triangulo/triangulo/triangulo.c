#include <stdio.h>

int main() {
	float l1 = 0.0, l2 = 0.0, l3 = 0.0;
	printf("Digite os lados do triangulo: ");
	scanf("%f %f %f", &l1, &l2, &l3);
	if ((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
		if ((l1 == l2) && (l2 == l3)) {
			printf("Equilatero!\n");
		} else {
			if ((l1 == l2) || (l2 == l3) || (l1 == l3)) {
				printf("Isosceles!\n");
			} else {
				printf("Escaleno!\n");
			}
		}
	} else {
		printf("Medidas nao formam triangulo!\n");
	}
	return 0;
}