#include <stdio.h>

main()
{
    int vetor[10];
    int i, maior, posicao;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicao = 0;

    for (i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O vetor digitado : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento : %d\n", maior);
    printf("Ele esta na posicao: %d\n", posicao);
}