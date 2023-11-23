#include <stdio.h>

int main()
{
    int vetor[8];
    int X, Y;
    int soma = 0;

    printf("\ndigite 8 valores inteiros:\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("\n%d", &vetor[i]);
    }

    do
    {
        printf("\ndigite duas posicoes (de 0 a 7): ");
        scanf("\n%d %d", &X, &Y);
        if (X >= 0 && X < 8 && Y >= 0 && Y < 8)
        {

            for (int i = 0; i < 8; i++)
            {
                if (i == X || i == Y)
                {
                    soma += vetor[i];
                }
            }
        }
        else
        {
            printf("Invalido. digite novamente");
        }

    } while (X <= 0 && X > 8 && Y <= 0 && Y > 8);

    printf("Soma: %d", soma);
}