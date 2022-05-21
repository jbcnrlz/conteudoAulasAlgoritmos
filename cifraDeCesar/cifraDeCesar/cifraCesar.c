#include <stdio.h>
#include <string.h>

int main() {
	int casoDeTeste = 0;
	scanf("%d", &casoDeTeste);
	while (casoDeTeste > 0) {
		char frase[50];
		int deslocamento = 0;
		scanf(" %50[^\n]", frase);
		scanf("%d", &deslocamento);
		//char fraseDescriptografada[50];
		//strcpy(fraseDescriptografada, frase);
		for (int i = 0; i < strlen(frase); i += 1) {
			int asciiLetra = 0;
			asciiLetra = (int)frase[i];
			asciiLetra = asciiLetra - deslocamento;
			if (asciiLetra < 65) {
				asciiLetra = 91 - (65 - asciiLetra);
			}
			char a = (char)asciiLetra;
			printf("%c", a);
		}
		printf("\n");
		casoDeTeste -= 1;
	}
	return 0;
}