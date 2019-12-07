#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	
	//Responsável por alimentar o random de forma diferente
	srand ((unsigned) time (NULL));
	
	//Variável que recebe o resto da divisão do número por 3, por exemplo. (Aleatório entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//Imprime o valor
	printf ("\n%d", aleatorio);	
	
	//Variável que recebe o resto da divisão do número por 5, por exemplo. Só que eu não quero aleatório entre 0 e 4, mas entre 1 e 5
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf ("\n%d", aleatorioSegundo);

}
