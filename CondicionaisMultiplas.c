#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a = 10;
	
	//Conectivo lógico E (AND) / Se uma comparação for falsa, não entra no bloco
	if (a > 5 && a < 15){
		printf ("\nA variável %d está entre 5 e 15", a);
	}
	
	//Conectivo lógico OU (OR) / Se uma comparação for verdadeira, já entra no bloco
	if (a > 5  || a < 15){
		printf ("\nA variável %d é maior que 5 ou 15", a);
	}
	
	//Misturando conectivos
	if ((a > 5 && a < 15) || a == 20){
		printf ("\nA variável %d está entre 5 e 15 ou ela vale 20", a);
	}
		
}
