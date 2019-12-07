#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, i, j;

	printf ("Tabuada do 5");	
	//Tabuada do 5
	for (a = 1; a <= 10; a++){
		printf ("\n5 X %d = %d ", a, 5 * a);
	}
	
	printf ("\n\n");
	
	printf ("Contagem crescente de 1 até 10");
	//Contando de 1 até 10
	for (a = 1; a <= 10; a++){
		printf ("\n%d", a);
	}
	
	printf ("\n\n");
	
	printf ("Contagem decrescente de 10 até 1");
	//Contagem regressiva
	for (b = 10; b >= 1; b--){
		printf ("\n%d", b);
	}
	
	printf ("\n\n");
	
	printf ("Contagem crescente de 2 em 2 de 0 até 10");
	//Contando de 2 em 2 de forma crescente
	for (i = 0; i <= 10; i = i + 2){
		printf ("\n%d", i);
	}
	
	printf ("\n\n");
		
	printf ("Contagem decrescente de 2 em 2 de 10 até 0");
	//Contando de 2 em 2 de forma decrescente
	for (j = 10; j >= 0; j = j - 2){
		printf ("\n%d", j);
	}
}
