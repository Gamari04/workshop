#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[9];
   int i,j ,grand;
   printf("entrer le nombres du tableau : \n");
   for(i=0;i<9;i++){
     printf("T[%d] = ",i);
     scanf("%d",&T[i]);
   }
   for(i=0;i<9;i++){
    for(j=i+1;j<9;j++){
     if(T[i]<T[j]){
        grand = T[i];
        T[i]=T[j];
        T[j]=grand;
     }
    }
   }
   printf("les nombres du tableau pa ordre decroissant sont : ");
   for(i=0;i<8;i++)
     printf("%d ",T[i]);
    return 0;
}
