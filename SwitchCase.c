#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 1;
	char b = 'x';
	
	//C�digo de exemplo com if
	if (a == 1){
		printf ("\nOp��o escolhida: 1");
	}else if (a == 2){
		printf ("\nOp��o escolhida: 2");
	}else if (a == 3){
		printf ("\nOp��o escolhida: 3");
	}else{
		printf ("\nOp��o inv�lida");
	}
	
	//O mesmo c�dido de cima, adaptado ao switch
	switch(a){
		case 1:
			printf ("\nOp��o escolhida: 1");
			break;
		case 2:	
			printf ("\nOp��o escolhida: 2");
			break;
		case 3:	
			printf ("\nOp��o escolhida: 3");
			break;
		default:
			printf("\nOp��o inv�lida");
			break;
	}
	
	//Switch com char
	switch(b){
		case 'x':
			printf("\nA letra � x");
			break;
		default:
			printf ("\nA letra n�o � x");
	}
}
