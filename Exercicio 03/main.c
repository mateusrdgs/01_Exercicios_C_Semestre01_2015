#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Y[15] = {0};
    int maior = 0;
    float resultado;
    int i = 0;

    printf("Dividir elementos por 15\n\n");
    for(i = 0; i < 15; i++)
    {
        printf("Escreva um numero inteiro aqui: ");
        scanf("%d", &Y[i]);
    }
    maior = Y[0];
    for(i = 0; i < 15; i++)
    {
        if(Y[i] > maior)
        {
            maior = Y[i];
        }
    }
    for(i = 0; i < 15;i++)
    {
        resultado = ((float)Y[i]/maior);
        printf("\n%d dividido por %d e: %.2f", Y[i], maior, resultado);
    }
    printf("\n");
    return 0;
}
