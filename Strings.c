#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (){
	
	char palavra[10]; //Vetor de string com 10 posi��es
	
	//Instru��o
	printf ("\nDigite uma palavra: ");	
	
	//Limpa o buffer
	setbuf (stdin, 0);
	
	//L� a string
	fgets (palavra, 10, stdin);
	
	//Limpa as posi��es n�o utilizadas na mem�ria
	palavra [strlen(palavra)-1] = '\0';
	
	//Imprime na tela
	printf ("\n%s", palavra);
}
