#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int vetor[TAM], cont;
	
	//Passando valores para o vetor
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;

	//Adicionando 1 para cada posi��o
	for (cont = 0; cont < TAM; cont++){
		vetor[cont] = vetor[cont] + 1;
	}

	//Exibindo os valores do vetor
	printf ("\nValor do vetor na posi��o 0: %d", vetor[0]);
	printf ("\nValor do vetor na posi��o 1: %d", vetor[1]);
	printf ("\nValor do vetor na posi��o 2: %d", vetor[2]);
	
	printf ("\n");
	
	//Imprimindo o vetor em um la�o de repeti��o
	for (cont = 0; cont < TAM; cont++){
		printf ("\nValor do vetor na posi��o %d: %d", cont, vetor[cont]);
	}
	
	printf ("\n\n");
	
	//Lendo tr�s valores para o vetor
	for (cont = 0; cont < TAM; cont++){
		printf ("Digite um valor para a posi��o %d: ", cont);
		scanf ("\n%d", &vetor[cont]);
	}
	
	//Imprimindo os tr�s valores digitados anteriormente para o vetor
	printf ("Os valores digitados para as posi��es foram: ");
	for (cont = 0; cont < TAM; cont++){
		printf ("\nPosi��o %d: %d", cont, vetor[cont]);
	}
	
	
}
