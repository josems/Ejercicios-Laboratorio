#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


float cm;
int pies;
float pulgadas;
float pies1;


printf("Ingrese los centimetros:\n");
scanf("%f",& cm);

pulgadas=cm/2.54;

pies=pulgadas/12;

printf(" Los pies  son :%d\n", pies );

pies1=pulgadas/12;
pulgadas=(pies1-pies)*12;

printf("Y las pulgadas son:%.1f\n", pulgadas);










	return 0;
}
