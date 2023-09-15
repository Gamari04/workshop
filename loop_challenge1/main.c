#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i;
    printf("entre un nombre : ");
    scanf("%d",&N);
    for(i=0;i<=10;i++){
        printf(" %d x %d = %d \n",N,i,N*i);
    }
    return 0;
}
