#include <stdio.h>
#include <math.h>

int main() {
	int a = 0, b = 0, c = 0;
	printf("Digite os valores: ");
	scanf("%d %d %d", &a, &b, &c);
	int maior = 0;
	maior = (a + b + abs(a - b)) / 2;
	maior = (maior + c + abs(maior - c)) / 2;
	printf("eh o maior %d \n", maior);

	//int a = 0;
	//float b = 9.5;
	//a = (int) b;
	//b = (float) a;
	return 0;
}