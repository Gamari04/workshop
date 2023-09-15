#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a , b , c, x,x1 ,x2;
    float delta;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    printf("entrer la valeur de c : ");
    scanf("%d",&c);
    delta = pow(b,2)- (4*a*c);
    if (delta <0){
    printf("Pas de solution reelles");
    }else if(delta==0){
      x=(-b)/(2*a);
      printf("La solution est : %.2f",x);
    }else{
        x1 = (-b - sqrt(delta))/(2*a);
         x2 = (-b + sqrt(delta))/(2*a);
         printf("les solutions sont : %.2f et %.2f",x1,x2);
    }


    return 0;
}
