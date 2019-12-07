#include<iostream>
#include<locale.h>


int Fibonacci (int n){

int somador1, somador2, somador3, cont;	
somador1 = -1;
somador2 = 1;	

	for (cont = 1; cont <= n; cont++){
		somador3 = somador1 + somador2;
		std::cout << somador3 << " ";
		somador1 = somador2;
		somador2 = somador3;
	}
}

int main(){

	setlocale (LC_ALL, "Portuguese");

	int num;

	std::cout << "Digite um número para ver a sua sequência de Fibonacci: ";
	std::cin >> num;
	Fibonacci(num);

}
