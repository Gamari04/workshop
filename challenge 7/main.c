#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ,nd1 , nd2 , nd3;
    printf("entrer un nombre : ");
    scanf("%d",&N);
    nd1=N % 10;
    nd2= (N/10) -10;
    nd3 = N/100;
    printf("inverse de ce nombre est :  %d%d%d",nd1,nd2,nd3);
    return 0;
}
