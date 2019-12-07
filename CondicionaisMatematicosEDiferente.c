#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 5, b = 10, c = 15;
	char d = 'x';
	
	//Maior
	if (a > 2)	{
		printf ("%d é maior do que 2", a);
	}
	
	//Maior ou igual
	if (c >= b){
		printf ("\n%d é maior ou igual a %d", c, b);
	}
	
	//Menor
	if (a < 10){
		printf ("\n%d é menor do que 10", a);
	}
	
	//Menor ou igual
	if (a <= 10){
		printf ("\n%d é menor ou igual a 10", a);
	}
	
	//Diferente
	if (c != 10){
		printf ("\n%d é diferente de 10", c);
	}
	
	//Diferente
	if (d != 'a'){
		printf ("\n%c é diferente de a", d);
	}
}
