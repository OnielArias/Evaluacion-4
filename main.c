#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float promedio =0;
    float ventas[3][5];

    for(a=0; a<3; a++){
        for (b=0; b<5; b++){
            printf("Ingrese el valor para vendedor %d ", a+1);
            scanf("%f", &ventas[a][b]);
        }
    }
    for(a=0; a<3; a++){
        for (b=0; b<5; b++){
         promedio += ventas[a][b];
        }
    }
    printf("El promedio de ventas es igual a %f. ", promedio/15);
    return 0;
}
