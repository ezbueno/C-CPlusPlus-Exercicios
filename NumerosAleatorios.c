#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	
	//Respons�vel por alimentar o random de forma diferente
	srand ((unsigned) time (NULL));
	
	//Vari�vel que recebe o resto da divis�o do n�mero por 3, por exemplo. (Aleat�rio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//Imprime o valor
	printf ("\n%d", aleatorio);	
	
	//Vari�vel que recebe o resto da divis�o do n�mero por 5, por exemplo. S� que eu n�o quero aleat�rio entre 0 e 4, mas entre 1 e 5
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf ("\n%d", aleatorioSegundo);

}
