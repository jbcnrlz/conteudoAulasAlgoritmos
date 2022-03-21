#include <stdio.h>
#include <math.h>

int main() {
	//ax2 + bx + c = 0
	float a = 0.0, b = 0.0, c = 0.0;
	float x1 = 0.0, x2 = 0.0;
	printf("Digite o a, b e c -> separados por espaco: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		printf("Nao eh equacao de segundo grau!!!\n");
	}else{
		float delta = pow(b, 2) - 4 * a * c; //(b*b) - (4*a*c)
		if (delta >= 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("X1 = %.2f \nX2 = %.2f", x1, x2);
		}else {
			printf("Impossivel calcular!");
		}
	}
	return 0;
}