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

	//Adicionando 1 para cada posição
	for (cont = 0; cont < TAM; cont++){
		vetor[cont] = vetor[cont] + 1;
	}

	//Exibindo os valores do vetor
	printf ("\nValor do vetor na posição 0: %d", vetor[0]);
	printf ("\nValor do vetor na posição 1: %d", vetor[1]);
	printf ("\nValor do vetor na posição 2: %d", vetor[2]);
	
	printf ("\n");
	
	//Imprimindo o vetor em um laço de repetição
	for (cont = 0; cont < TAM; cont++){
		printf ("\nValor do vetor na posição %d: %d", cont, vetor[cont]);
	}
	
	printf ("\n\n");
	
	//Lendo três valores para o vetor
	for (cont = 0; cont < TAM; cont++){
		printf ("Digite um valor para a posição %d: ", cont);
		scanf ("\n%d", &vetor[cont]);
	}
	
	//Imprimindo os três valores digitados anteriormente para o vetor
	printf ("Os valores digitados para as posições foram: ");
	for (cont = 0; cont < TAM; cont++){
		printf ("\nPosição %d: %d", cont, vetor[cont]);
	}
	
	
}
