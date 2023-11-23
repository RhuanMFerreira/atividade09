#include <stdio.h>

main()
{
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("\nDigite o %d valor:\n ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores lidos:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", valores[i]);
    }
}