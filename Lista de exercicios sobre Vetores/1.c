#include <stdio.h>


int minhaFunc(int* vetor, int n)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > 5)
        {
            contador++;
        }
    }

    return contador;
}


int main(void)
{
    int vetores[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    int quantosNumeros = sizeof(vetores) / sizeof(int);

    int quantosSaoMaiorQueCinco = minhaFunc(vetores, quantosNumeros);

    printf("quantos %d", quantosSaoMaiorQueCinco);

    return 0;
}
