#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	int a = 1, b = 10;
	
	//Contando até 10
	do{
		printf("\n%d", a);
		a++; //Incremento mais 1 na variável a
	}while(a <= 10);
		
		
	printf ("\n");
	
	//Contagem regressiva
	do{
		printf ("\n%d", b);
		b--; //Decremento menos 1 da variável b
	}while(b >= 1);
}
