#include <stdio.h>
int main(void)
{
    int i, acao;
    float cd[100], porcentagem;

    for (i = 0; i <= 100; i++)
    {
        printf("Insira o Preco do CD: ");
        scanf("%i", &cd[i]);
    }
    system("cls");
    printf("Insira a Acao que deseja exexutar.");
    printf("1-Aumentar preco em 10%");
    printf("2- Inserir percentual manualmente");
    scanf("%i", &acao);
    if (acao == 1)
    {
        for (i = 0; i <= 100; i++)
        {
            printf("CD %i: Valor Anterior %.2f | Valor Atual: %.2f", i + 1, cd[i], cd[i] * 1.1);
        }
    }
    else if (acao == 2)
    {
        printf("Insira a porcentagem que voce deseja aumentar");
        scanf("%f", porcentagem);
        porcentagem = porcentagem / 100;
        for (i = 0; i <= 100; i++)
        {
            printf("CD %i: Valor Anterior %.2f | Valor Atual: %.2f", i + 1, cd[i], cd[i] * (1 + porcentagem));
        }
    }

    return 0;
}
