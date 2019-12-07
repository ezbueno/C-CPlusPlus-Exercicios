#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 5, b;
	
	printf("%d", a);
	
	printf("\n");
	
	//Concatenação
	printf("Var a = %d %d", a, a);
	
	//Mudando o valor de a
	a = 15;
	
	printf("\nVar a = %d", a);
	
	printf("\n");
	
	//Lendo valor
	scanf("%d", &b);
	printf("\nVar b = %d", b);
	
	printf("\nUhuhuhu");
	
	system("pause")	;
	return 0;
}
