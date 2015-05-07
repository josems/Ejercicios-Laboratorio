#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero;
  int suma=0;
  float division;
  int contador=0;
  

                             for(contador = 0; contador < 5; contador ++)
                             {
                                           
										   printf("\nIngrese 5 numeros cualquiera: ");
               							   scanf("%d", & numero);
							               suma=suma+numero;
								
							      system("CLS");
                             }
                             
                              division = suma/5;
                                  printf("\nSu media es: %.2f\n",division);
  
  
  
  system("PAUSE");	
  
  return 0;
}
