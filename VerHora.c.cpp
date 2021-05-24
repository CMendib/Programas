 /*Dep3_Prog2: Verificar la hora*/

 #include <stdio.h>
 
 int main()
 {
    int hora, minutos, segundos;
    printf("\n Introduce las hora");
    scanf("%d", &hora);
    printf("\n Introduce los minutos");
    scanf("%d", &minutos);
    printf("\n Introduce los segundos");
    scanf("%d", &segundos);
    
    if ( (horas>=0 && horas<=23) && (minutos>=0 && minutos<=59) && (segundos>=0 && segundos<=59))
    {
      printf("\n El formato de hora es correcto");
    }
    else
    {
      printf("\n El formato de hora es incorrecto");
    }
 }