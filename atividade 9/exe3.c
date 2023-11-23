#include <stdio.h>

main()
{
    float conj_ori[10];
    float conj_Quadrados[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero real: ", i + 1);
        scanf("\n%f", &conj_ori[i]);
        conj_Quadrados[i] = conj_ori[i] * conj_ori[i];
    }

    printf("\nConjunto Original:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%.2f ", conj_ori[i]);
    }

    printf("\nConjunto dos Quadrados:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%.2f ", conj_Quadrados[i]);
    }
}