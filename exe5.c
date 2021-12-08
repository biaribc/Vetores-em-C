#include <stdio.h>
int main(void)
{
	int vetor[80], i, n = 0, aparece[80], valor;

	for (i = 0; i <= 8; i++)
	{
		scanf("%i", &vetor[i]);
	}
	printf("Insira o valor que deseja pesquisar: ");
	scanf("%i", &valor);
	for (i = 0; i <= 8; i++)
	{
		if (vetor[i] == valor)
		{
			aparece[n] = i;
			n++;
		}
	}
	printf("%i aparece %i vezes na leitura nas posicoes ", valor, n);
	for (i = 0; i <= n; i++)
	{
		printf("%i, ", aparece[i]);
	}
	return 0;
}
