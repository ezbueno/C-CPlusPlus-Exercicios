#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	int a = 1, b = 10;
	
	//Contando at� 10
	while (a <= 10){
		printf("\n%d", a);
		a = a + 1; //Incremento mais 1 na vari�vel a / Esse jeito � o mesmo que a++
	}
	
	printf ("\n");
	
	//Contagem regressiva
	while (b >= 1){
		printf ("\n%d", b);
		b = b - 1; //Decremento menos 1 da vari�vel b / Esse jeito � o mesmo que b--
	}
}
