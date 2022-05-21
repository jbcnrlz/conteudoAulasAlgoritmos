#include <stdio.h>

void printTree(int maxP, int root) {
	int sizeAst = 1;
	int rodou = 0;
	while (maxP >= 0){
		if ((root == 1) && (rodou == 2)) {
			break;
		}
		rodou += 1;
		for (int i = 0; i < maxP; i++) {
			printf(" ");
		}
		for (int i = 0; i < sizeAst; i++) {
			printf("*");
		}
		printf("\n");
		maxP -= 1;
		sizeAst += 2;
	}
}

int main() {
	int tamanhoTotal = 0;	
	while (scanf("%d", &tamanhoTotal) != EOF) {
		int maxPoint = tamanhoTotal / 2;
		printTree(maxPoint, 0);
		printTree(maxPoint, 1);
		printf("\n");
	}
	return 0;
}