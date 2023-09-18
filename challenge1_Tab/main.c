#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,Tab[9];
      printf("donner les elements du tableau : ");
      for(i=0;i<10;i++){
      scanf("%d",&Tab[i]);
    }
    for(i=0;i<=9;i++)
    printf("T[%d]=%d ,",i,Tab[i]);


    return 0;
}
