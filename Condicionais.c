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
		printf ("\nA vari�vel a � = %d", a);
	}
	
	//Condicional simples
	if (b == 2.5){
		printf ("\nA vari�vel b � = %.1f", b, b);
	}
	
	//Condicional simples
	if (c == 'x'){
		printf ("\nA vari�vel c � = letra %c", c);
	}
	
	//Condicional composta
	if (opcao == 1){
		printf ("\nA op��o � igual a 1");
	}else if (opcao == 2){
		printf ("\nA op��o � igual a 2");
	}else{
		printf ("\nA op��o n�o � igual a 1 e nem 2");
	}
	
	
	//Verificar se o n�mero � par ou �mpar
	if (a % 2 == 0){
		printf ("\nO n�mero %d � par", a);
	}else{
		printf ("\nO n�mero %d � �mpar", a);
	}
}
