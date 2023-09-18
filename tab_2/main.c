#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i,Tab[9];
      printf("donner les elements du tableau : \n");
      for(i=0;i<10;i++){
      scanf("%d",&Tab[i]);
    } int Max=Tab[0];
      for(i=0;i<9;i++){
        if(Max<Tab[i])
        Max=Tab[i];
      }
      int Min=Tab[0];
      for(i=0;i<9;i++){
        if(Min>Tab[i])
        Min=Tab[i];
      }
      printf("le maximum est %d\n",Max);
      printf("le minimum est %d",Min);

    return 0;
}
