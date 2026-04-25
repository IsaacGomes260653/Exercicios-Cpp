#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Esperando por 2 segundos...\n");
	Sleep(2000);
	printf("Continuando a execução do programa. \n");
	system("Pause");
	return 0;
}