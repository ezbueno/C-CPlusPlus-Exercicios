#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 1;
	char b = 'x';
	
	//Código de exemplo com if
	if (a == 1){
		printf ("\nOpção escolhida: 1");
	}else if (a == 2){
		printf ("\nOpção escolhida: 2");
	}else if (a == 3){
		printf ("\nOpção escolhida: 3");
	}else{
		printf ("\nOpção inválida");
	}
	
	//O mesmo códido de cima, adaptado ao switch
	switch(a){
		case 1:
			printf ("\nOpção escolhida: 1");
			break;
		case 2:	
			printf ("\nOpção escolhida: 2");
			break;
		case 3:	
			printf ("\nOpção escolhida: 3");
			break;
		default:
			printf("\nOpção inválida");
			break;
	}
	
	//Switch com char
	switch(b){
		case 'x':
			printf("\nA letra é x");
			break;
		default:
			printf ("\nA letra não é x");
	}
}
