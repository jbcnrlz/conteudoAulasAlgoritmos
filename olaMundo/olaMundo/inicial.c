#include <stdio.h>
#define KELVINVAL 273.15
int main() {
	float c = 0.0, k = 0.0;
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	k = c + KELVINVAL;
	printf("A temperatura e de %.2f K\n", k);
	return 0;
}