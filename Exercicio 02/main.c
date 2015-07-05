#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[50] = {70,20,50,30,10,60,40,30,90,80};
    int i = 0;
    printf("Numeros superiores a 50\n");
    for(i = 0; i < 50; i++)
    {
        if(vetor[i] > 50)
        {
            printf("\nO numero %d esta na posicao %d e e maior que 50", vetor[i], i);
        }
    }
    printf("\n");
    return 0;
}
