#include <stdio.h>

main()
{
    int vetor[6];
    int i;

    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Os valores na ordem inversa sao: ");
    for (i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}