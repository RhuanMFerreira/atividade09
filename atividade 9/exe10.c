#include <stdio.h>

main()
{
    int notas[15];
    int i, soma = 0;

    printf("Digite as notas dos 15 alunos:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    float media = (float)soma / 15;

    printf("A media geral é: %.2f\n", media);
}