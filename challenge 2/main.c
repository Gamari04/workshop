#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,c;
    printf("entrer la température en Fahrenheit ");
    scanf("%f",&F);
    c = (F-32)/1.8;
    printf("la temperature en celcuis est : %2.f \n",c);
    if(c<0){
        printf("la meteo est tres froid");
    }
      if ( 11 < c && c < 26) {
        printf("Le meteo est froid.");
    }
    if(26 < c && c < 36) {
        printf("Le meteo est chaud.");
    }
    if(36 < c && c < 50) {
        printf("Le meteo est tres chaud.");
    }

    return 0;
}
