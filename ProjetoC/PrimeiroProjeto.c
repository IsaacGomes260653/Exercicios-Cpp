#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	printf("Primeiro programa \n");
	printf("Bacana! Seu primeiro programa!\n");
	printf("Agora é só teclar algo para sair");
	
	system("pause>nul");

	return 0;
}