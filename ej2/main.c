#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
			printf("Ingrese Un numero\n");
			    scanf("%d",& numero );
			
			 while(numero<=0)
			 {
			   
			   printf("Error, el numero debe ser mayor que 0, vuelva a ingresar\n");
		       scanf("%d", & numero);
			   
			 if(numero>0)
			 {
			 	printf("BIEN EL NUMERO ES MAYOR A 0\n");
			 }
			 
			}
			 
	


	
	
	system("PAUSE");
	return 0;
	
}
