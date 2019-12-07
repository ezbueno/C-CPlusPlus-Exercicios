#include<iostream>
#include<locale.h>


int i, j, result;

int Soma (int x, int y){
	return x + y;
}

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	std::cout << "Digite o primeiro número: ";
	std::cin >> i;
	
	std::cout << "Digite o segundo número: ";
	std::cin >> j;
	
	result = Soma (i,j);
	
	std::cout << "A soma dos valores é = " << result;
	
}
