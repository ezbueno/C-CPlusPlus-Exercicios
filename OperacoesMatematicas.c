#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int a= 4, b= 2;
	
	printf("\nValor de a = %d", a);
	printf("\nValor de b = %d\n\n", b);
	
	//Soma
	printf("O resultado da soma de %d e %d � = %d\n", a, b, a + b);
	
	//Subtra��o
	printf("O resultado da subtra��o de %d e %d � = %d\n", a, b, a - b);
	
	//Multiplica��o
	printf("O resultado da multiplica��o de %d e %d � = %d\n", a, b, a * b);
	
	//Divis�o
	printf("O resultado da divis�o de %d e %d � = %d\n", a, b, a / b);
	
	//Resto da divis�o
	printf("O resto da divis�o de %d e %d � = %d\n", a, b, a % b);
	
	//Valor absoluto - Se o valor for negativo, ser� mostrado o valor positivo
	printf("O valor absoluto de -3 � = %d", abs(-3));
	
	
}
