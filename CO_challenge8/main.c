#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Moyenne;
   printf("entrer la moyenne du eleve : ");
   scanf("%f",&Moyenne);
   if(Moyenne < 10){
    printf(" Mention : recale");
   }else if(Moyenne >= 10 && Moyenne < 12){
      printf("Mention : passable");
   }else if(Moyenne >= 12 && Moyenne <14){
      printf("Mention : assez bien");
   }else if(Moyenne >= 14 && Moyenne <16){
       printf("Mention : bien");
   }else (Moyenne >= 16);
       printf("Mention : tres bien ");
       return 0;

    return 0;
}
