#include <stdio.h>
int main(void)
{
    int i, n, count;
    float nota[100];
    for (i = 0; i <= 10; i++)
    {
        printf("Insira a nota: ");
        scanf("%f", &nota[i]);
    }

    system("cls");
    for (n = 0; n <= 10; n++)
    {
        count = 0;
        for (i = 0; i <= 100; i++)
        {
            if (nota[i] == n)
                count++;
        }
        printf("Frequencia de notas %i = %i \n", n, count);
    }
    return 0;
}
