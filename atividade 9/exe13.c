#include <stdio.h>

main()
{
    int valores[5];
    int i, maior, menor, posMaior, posMenor;

    printf("Digite 5 valores inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &valores[i]);

        if (i == 0)
        {
            maior = menor = valores[i];
            posMaior = posMenor = i;
        }
        else
        {
            if (valores[i] > maior)
            {
                maior = valores[i];
                posMaior = i;
            }
            if (valores[i] < menor)
            {
                menor = valores[i];
                posMenor = i;
            }
        }
    }

    printf("A posicao do maior valor (%d) e: %d\n", maior, posMaior);
    printf("A posicao do menor valor (%d) e: %d\n", menor, posMenor);
}