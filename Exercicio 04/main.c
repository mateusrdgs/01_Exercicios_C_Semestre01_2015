#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][2];
    int resultante[4][2];
    int linha = 0;
    int coluna = 0;
    int multiplicador = 0;
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite o numero da coluna %d da linha %d: ", coluna+1, linha+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    printf("\nDigite o numero multiplicador: ");
    scanf("%d", &multiplicador);
    for(linha = 0; linha < 4; linha++)
    {
        for(coluna = 0; coluna < 2; coluna++)
        {
            resultante[linha][coluna] = ((matriz[linha][coluna])*multiplicador);
            printf("\nO numero da coluna %d na linha %d multiplicado por %d e: %d", coluna+1, linha+1, multiplicador, resultante[linha][coluna]);
        }

    }
    printf("\n");
    return 0;
}
