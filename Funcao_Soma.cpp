#include<iostream>
#include<locale.h>


int i, j, result;

int Soma (int x, int y){
	return x + y;
}

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> i;
	
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> j;
	
	result = Soma (i,j);
	
	std::cout << "A soma dos valores � = " << result;
	
}
