#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {





int numero;
int i;
int contadorPositivos=0;
int contadorNegativos=0;


	

			for (i=0; i<10; i++)
				{
					printf("\nIngrese numeros:");
					scanf("%d",& numero);
					
						if(numero<0)
						contadorNegativos++;
						else
						contadorPositivos++;
					system("CLS");
				}
		printf("\nLos numeros positivos son: %d, y los negativos son: %d ", contadorPositivos,contadorNegativos);





















	return 0;
}
