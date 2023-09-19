#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C[100];
    int i,n=0;
    printf("saisir une chaine de caractere : ");
    scanf("%s",C);
    for(i=0;C[i]!='\0';i++)
        n++;
    printf("la longueur de la chaine  est : %d \n",n);
    return 0;
}
