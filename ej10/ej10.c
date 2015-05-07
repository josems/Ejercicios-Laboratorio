#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int numero;
int contadorPares=0;


		for(numero=0; numero<100; numero++)
			if(numero%2==0)
				contadorPares++;
				
				printf("\nHay : %d numeros pares.",contadorPares);







	return 0;
}
