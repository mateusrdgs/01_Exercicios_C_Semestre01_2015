#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10] = {1, 12, 3, 14, 5, 16, 7, 18, 9, 10};
    int B[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int X[20] = {0};
    int i = 0, n = 0;
    printf("Intercalacao de vetores\n");
    for(i = 0; i < 20; i++)
    {
        X[i] = A[n];
        X[i+1] = B[n];
        i++;
        n++;
    }
    for(i=0; i < 20; i++)
    {
        printf("\nVetor X[%d]: %d",i, X[i]);
    }
    return 0;
}
