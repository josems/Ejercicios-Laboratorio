#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int numeroSemana=0;
char respuesta;


    
	printf("\nIngrese un numero para saber que dia de la semana es:");
	scanf("%d",& numeroSemana );
	
	respuesta='s';
	while(respuesta!='n')
	{
	
	
             switch(numeroSemana)
             {
			 		case 1:
			 			printf("Lunes");
					break;
			 		
					 case 2:
			 			printf("Martes");
			 	    break;
					
					 case 3:
			 			printf("Miercoles");
				    break;
			 		
					case 4:
			 		    printf("Jueves");
					break;  
					  
					case 5:
					  	printf("Viernes");
			 		break;
			 		
					 case 6:
			 			printf("Sabado");
			 		break;
			 		
					case 7:
			 			printf("Domingo");
			 		break;
			 
			 		default:
			 			printf("Error en el dia");
			 			
			 }
			 
              printf("\nDesea continuar s/n?");
			  scanf("%c",& respuesta);
		   	 
			
		
		
		
		system("CLS");
	}
		


           
		 

















	return 0;
}
