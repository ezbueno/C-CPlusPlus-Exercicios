#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	
		
	int a = 5;
	float b = 2.5;
	char c = 'a';
	bool d = true; // true = 1, false = 0
	
	//Escrevendo na tela
	printf("\nValor de a = %d", a);
	printf("\nValor de b = %.1f", b);
	printf("\nValor de c = %c", c);
	printf("\nValor de d = %d\n", d); 
	
	printf("\n");
	
	//Lendo valor
	scanf("%d", &a);
	scanf("%f", &b);
	scanf(" %c", &c); //Quando for ler um caracter, coloca-se um espaco depois das aspas
	scanf("%d", &d);
	
	printf("\n");
	
	//Escrevendo na tela
	printf("\nValor de a = %d", a);
	printf("\nValor de b = %.1f", b);
	printf("\nValor de c = %c", c);	
	printf("\nValor de d = %d", d);	
	
	printf("\n");
	
	system("pause");
	
}
