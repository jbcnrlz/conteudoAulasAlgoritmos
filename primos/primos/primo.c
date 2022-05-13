#include <stdio.h>

#define MAX_PRIMO 10001

int main() {
	int qtPrimo = 1, nPrimo=1;
	while (qtPrimo < MAX_PRIMO) {
		nPrimo += 2;
		int qtDivs = 0;
		for (int divisor = 2; divisor < nPrimo; divisor += 1) {
			int restoDiv = nPrimo % divisor;
			if (restoDiv == 0) {
				qtDivs += 1;
				break;
			}
		}
		if (qtDivs == 0) {
			qtPrimo += 1;
			printf("O %d primo foi encontrado!\n", qtPrimo);
		}		
	}
	printf("O numero primo que vc quer eh: %d",nPrimo);
	return 0;
}