#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (){
	
	char palavra[10]; //Vetor de string com 10 posições
	
	//Instrução
	printf ("\nDigite uma palavra: ");	
	
	//Limpa o buffer
	setbuf (stdin, 0);
	
	//Lê a string
	fgets (palavra, 10, stdin);
	
	//Limpa as posições não utilizadas na memória
	palavra [strlen(palavra)-1] = '\0';
	
	//Imprime na tela
	printf ("\n%s", palavra);
}
