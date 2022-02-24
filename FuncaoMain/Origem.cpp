#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* const argv[], char* const envp[])
{
	// imprime o conte�do do inteiro argc
	printf("O conteudo de argc: %d\n\n", argc);
	

	int cont = 0;

	while (argv[cont] != NULL)
	{
		// imprime o conte�do de argv desde a primeira posi��o em diante enquanto existir
		printf("O conteudo de argv na posicao %d = %s\n\n", cont, argv[cont++]);
	}
	
	cont = 0;

	while (envp[cont] != NULL)
	{
		// // imprime o conte�do de envp desde a primeira posi��o em diante enquanto existir
		printf("O conteudo de envp na posicao %d = %s\n",cont, envp[cont++]);
	}

	return 0;
}