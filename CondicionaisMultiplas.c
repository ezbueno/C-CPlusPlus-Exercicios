#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int a = 10;
	
	//Conectivo l�gico E (AND) / Se uma compara��o for falsa, n�o entra no bloco
	if (a > 5 && a < 15){
		printf ("\nA vari�vel %d est� entre 5 e 15", a);
	}
	
	//Conectivo l�gico OU (OR) / Se uma compara��o for verdadeira, j� entra no bloco
	if (a > 5  || a < 15){
		printf ("\nA vari�vel %d � maior que 5 ou 15", a);
	}
	
	//Misturando conectivos
	if ((a > 5 && a < 15) || a == 20){
		printf ("\nA vari�vel %d est� entre 5 e 15 ou ela vale 20", a);
	}
		
}
