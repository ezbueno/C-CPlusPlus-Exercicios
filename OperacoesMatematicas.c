#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int a= 4, b= 2;
	
	printf("\nValor de a = %d", a);
	printf("\nValor de b = %d\n\n", b);
	
	//Soma
	printf("O resultado da soma de %d e %d é = %d\n", a, b, a + b);
	
	//Subtração
	printf("O resultado da subtração de %d e %d é = %d\n", a, b, a - b);
	
	//Multiplicação
	printf("O resultado da multiplicação de %d e %d é = %d\n", a, b, a * b);
	
	//Divisão
	printf("O resultado da divisão de %d e %d é = %d\n", a, b, a / b);
	
	//Resto da divisão
	printf("O resto da divisão de %d e %d é = %d\n", a, b, a % b);
	
	//Valor absoluto - Se o valor for negativo, será mostrado o valor positivo
	printf("O valor absoluto de -3 é = %d", abs(-3));
	
	
}
