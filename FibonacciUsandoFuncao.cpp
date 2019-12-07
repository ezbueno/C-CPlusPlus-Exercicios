#include<iostream>
#include<locale.h>

int Fibonacci (int var1, int var2){
 
int var3;
 	
var3 = var1 + var2;
var1 = var2;
var2 = var3;
return var3;

}

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int num, n1, n2, n3, cont;
	
	n1 = -1;
	n2 = 1;
	
	std::cout << "Digite um número para visualizar a sua sequência de Fibonacci: ";
	std::cin >> num;
	
	
	for (cont = 1; cont <= num; cont++){
		n3 = Fibonacci (n1, n2);
		std::cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	
}
