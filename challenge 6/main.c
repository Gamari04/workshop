#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r ,C;
    const float Pi = 3.14;
    printf("entrer le rayon du cercle");
    scanf("%f",&r);
    C = r*Pi;
    printf("le circonference du cercle est : %f",C);

    return 0;
}
