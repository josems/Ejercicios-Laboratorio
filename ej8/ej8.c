#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    char caracter;
    int contadorA=0;
    int contadorE=0;
    int contadorI=0;
    int contadorO=0;
    int contadorU=0;
    int cantidad;
        for(cantidad=0; cantidad<20; cantidad++)
                 {
                        printf("ingresar caracter %d\n",cantidad);
                        scanf("%c", & caracter);
                         fflush(stdin);
                        caracter= tolower(caracter);
                           switch(caracter)
                        {
                                 case 'a':
                                      contadorA++;
                                 break;
                                 
                                 case 'e':
                                      contadorE++; 
                                 break;
                                 
                                 case 'i':
                                      contadorI++;
                                 break;
                                 
                                 case'o':
                                         contadorO++;
                                         break;
                                 case'u':
                                         contadorU++;
                                         break;
                  }                      
                 system("cls");
                 
                 }    
                              
                   
                  printf( "Cantidad de A:%d - E:%d - I:%d - O:%d - U:%d\n", contadorA,contadorE,contadorI,contadorO,contadorU);
                                                 
                   
                               
                 
system("PAUSE");	
  return 0;
}
