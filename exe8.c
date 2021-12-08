#include <stdio.h>
int main(void)
{
    int i, posicao[100], n = 0;
    float idade[100], maior = -1, media, soma = 0;

    for (i = 0; i <= 100; i++)
    {
        printf("Insira a idade: ");
        scanf("%i", &idade[i]);
        soma = soma + idade[i];
        if (idade[i] >= maior)
        {
            maior = idade[i];
            posicao[n] = i;
            n++;
        }
    }
    media = soma / 100;
    printf("a media e de %i e a pessoa mais velha e de %f que aparece nas posicoes ");
    for (i = 0; i <= n; i++)
    {
        printf("%i", posicao[i]);
    }
    return 0;
}
