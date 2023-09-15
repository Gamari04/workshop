#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A ,B ,S;
    printf("entrer le nombre A : ");
    scanf("%d",&A);
    printf("entrer le nombre B : ");
    scanf("%d",&B);
    S = A + B;
    printf("la somme de %d et %d egale %d \n",A,B,S);
    if (A==B){
        S = S * 3;
        printf("le triple de leur somme egale %d",S);
    }
    return 0;
}
