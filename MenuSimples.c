#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	//Confere e valida a op��o
	while (opcao < 1 || opcao > 3){
	//Interface do Menu
	printf ("---------------------");
	printf ("\n| Escolha uma op��o |");
	printf ("\n---------------------");
	printf ("\n1) Nayara");
	printf ("\n2) Rominha");
	printf ("\n3) Emnie\n");
	
	printf ("\nCom quem voc� gostaria de sair?");
	printf ("\nDigite a op��o desejada: ");
	scanf ("\n%d", &opcao);
	
	//Resultado de acordo com a op��o escolhida	
	switch(opcao){
		case 1:
			printf ("\nVoc� escolheu sair com a Nayara");
			break;
		case 2:
			printf ("\nVoc� escolheu sair com a Rominha");
			break;
		case 3:
			printf ("\nVoc� escolheu sair com a Emnie");
			break;
		default:
			printf ("\nAten��o! Op��o inv�lida\n");
			break;
		}
	}
}
