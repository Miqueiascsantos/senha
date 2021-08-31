#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int salario=0;
	float r=0;
	
	printf("Qual o seu salario atual: ");
	scanf("%i", &salario);
	
	if(salario<=500)
	r= (salario * 0.3) + salario;
	
	else
	printf("Voce nao possui direito a este reajuste \n ");
	
	printf("Seu novo salario e: %f r$\n", r);
	
	system("pause");
	
	return 0;
	
}
