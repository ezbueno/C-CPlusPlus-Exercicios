#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 5, opcao = 1;
	float b = 2.5;
	char c = 'x';
	
	//Condicional simples
	if (a == 5){
		printf ("\nA variável a é = %d", a);
	}
	
	//Condicional simples
	if (b == 2.5){
		printf ("\nA variável b é = %.1f", b, b);
	}
	
	//Condicional simples
	if (c == 'x'){
		printf ("\nA variável c é = letra %c", c);
	}
	
	//Condicional composta
	if (opcao == 1){
		printf ("\nA opção é igual a 1");
	}else if (opcao == 2){
		printf ("\nA opção é igual a 2");
	}else{
		printf ("\nA opção não é igual a 1 e nem 2");
	}
	
	
	//Verificar se o número é par ou ímpar
	if (a % 2 == 0){
		printf ("\nO número %d é par", a);
	}else{
		printf ("\nO número %d é ímpar", a);
	}
}
