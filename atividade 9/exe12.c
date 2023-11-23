#include <stdio.h>

main()
{
    int valores[5];
    int i, soma = 0, maior, menor;

    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &valores[i]);
        soma += valores[i];

        if (i == 0)
        {
            maior = menor = valores[i];
        }
        else
        {
            if (valores[i] > maior)
            {
                maior = valores[i];
            }
            if (valores[i] < menor)
            {
                menor = valores[i];
            }
        }
    }

    float media = (float)soma / 5;

    printf("Valores lidos:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", valores[i]);
    }
    printf("\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media: %.2f\n", media);
}