#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CH;
    printf("entrer un caractere : ");
    scanf("%c",&CH);
    switch(CH){
    case 'a' :
    case 'e' :
    case 'i':
    case'o':
    case 'u':
    case 'y':
        printf("ce caractere est un voyelle");
        break;
        default:
            printf("ce caractere est consonne");
    }

    return 0;
}
