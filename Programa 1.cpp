
#include <stdio.h>

main(){

         float bma,bme,h,A;

         printf("Bienvenido al programa para calcular areas de trapecios.\n\n");

         printf("Bien, introduzca la base mayor: ");

         scanf("%f",&bma);

         printf("Ahora, escriba la base menor: ");

         scanf("%f",&bme);

         printf("Ya solo necesito la altura: ");

         scanf("%f",&h);

         A=((bma+bme)*h)/2;

         printf("\nEl area del trapecio es %f\n\n",A);

}