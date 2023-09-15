#include <stdio.h>
#include <stdlib.h>

int main()
{
   char C;
   printf("entrer un caracter : ");
   scanf("%c",&C);
   if(C>='a' && C<='z')
    printf(" %c est une alphabet en minuscule \n",C);
   if(C>='A' && C<='Z')
      printf(" %c est une alphabet en majuscule \n",C);
    if(! (C>='a' && C<='z') && !(C>='A' && C<='Z'))
         printf(" %c ce n'est pas une alphabet \n",C);

    return 0;
}
