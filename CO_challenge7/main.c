#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
   printf("entrer une lettre a verifier : ");
   scanf("%c",&C);
   if(C >= 65 && C <=90){
    printf(" la lettre saisie est majuscule");
   }else
     printf("la lettre saisie est non majuscule");

    return 0;
}
