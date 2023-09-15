#include <stdio.h>
#include <stdlib.h>

int main()
{
   int L ,i,j ;
   printf("entrer le nombre de lignes");
   scanf("%d",&L);
   for(i=1;i<=L;i++){
        for(j=L-i;j>=1;j--)
        printf(" ");
     for(j=1;j<=i+i-1;j++)
        printf("*");
     printf("\n");
   }
    return 0;
}
