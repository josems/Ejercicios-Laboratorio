#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    int cuadrado;
    int cubo;
    int cantidad;
        
        printf("Ingrese un Numero para saber su cuadrado y su cubo\n");  
        scanf("%d", & numero);
        fflush(stdin);
      for(cantidad=1; cantidad<=numero; cantidad++)
      {
                     cuadrado = cantidad * cantidad;
                      cubo = cantidad * cantidad * cantidad;
                      printf("%d\t  %d \t  %d\t \n", cantidad,cuadrado,cubo);
      }                
                      
      
      
       
  
  system("PAUSE");	
  return 0;
}
