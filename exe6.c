#include <stdio.h>
int main(void)
{
    int matricula[100], i;
    float salario[100], maior = -1, menor = 1500000;

    for (i = 0; i <= 100; i++)
    {
        printf("Insira a Matricula: ");
        scanf("%i", &matricula[i]);
        printf("Insira o Salario: ");
        scanf("%f", &salario[i]);
        if (salario[i] < menor)
            menor = salario[i];
        if (salario[i] > maior)
            maior = salario[i];
    }
    system("cls");
    printf("O maior salario e de %f e o menor e de %f", maior, menor);
    for (i = 0; i <= 100; i++)
    {
        printf("=======FUNCIONARIO %i", i + 1);
        printf("Matricula: %i", matricula[i]);
        printf("Salario: %.2f", salario[i]);
    }

    return 0;
}
