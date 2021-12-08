#include <stdio.h>
int main(void)
{
    int i, matricula[50], posicao[2], meses[50], i[2];
    posicao[0] = 20000;
    posicao[1] = 20000;
    posicao[2] = 20000;
    for (i = 0; i <= 100; i++)
    {
        printf("Insira a matricula: ");
        scanf("%i", &matricula[i]);
        printf("Insira os meses de trabalho: ");
        scanf("%i", &meses[i]);
        if (meses[i] < posicao[2])
            posicao[2] = i;
        else if (meses[i] < posicao[1])
            posicao[1] = i;
        else if (meses[i] < posicao[0])
            posicao[0] = i;
    }
    system("cls");

    printf("Os funcionarios mais recentes têm matricula %i, %i e %i", matricula[posicao[2]], matricula[posicao[1]], matricula[posicao[0]]);

    return 0;
}
