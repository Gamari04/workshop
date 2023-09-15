#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer un nombre : ");
    scanf("%d",&N);
    if(N%2==0){
        printf("ce nombre est paire");
    }else{
        printf("ce nombre est impaire");
    }
    return 0;
}
