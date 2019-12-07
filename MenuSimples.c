#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	//Confere e valida a opção
	while (opcao < 1 || opcao > 3){
	//Interface do Menu
	printf ("---------------------");
	printf ("\n| Escolha uma opção |");
	printf ("\n---------------------");
	printf ("\n1) Nayara");
	printf ("\n2) Rominha");
	printf ("\n3) Emnie\n");
	
	printf ("\nCom quem você gostaria de sair?");
	printf ("\nDigite a opção desejada: ");
	scanf ("\n%d", &opcao);
	
	//Resultado de acordo com a opção escolhida	
	switch(opcao){
		case 1:
			printf ("\nVocê escolheu sair com a Nayara");
			break;
		case 2:
			printf ("\nVocê escolheu sair com a Rominha");
			break;
		case 3:
			printf ("\nVocê escolheu sair com a Emnie");
			break;
		default:
			printf ("\nAtenção! Opção inválida\n");
			break;
		}
	}
}
