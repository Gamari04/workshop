#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer un nombre : ");
    scanf("%d",&N);
    if(N>0){
        printf("ce nombr %d est positif",N);
    }else if(N<0){
        printf("ce nombre %d est negatif ",N);
    }else
       printf("ce nombre %d est egale a zero",N);

    return 0;
}
