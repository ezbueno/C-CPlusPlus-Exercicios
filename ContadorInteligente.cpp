#include<iostream>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	std::cout << "==========================================\n";
	std::cout << "| C O N T A D O R  I N T E L I G E N T E |\n";
	std::cout << "==========================================\n";
	
	int ini, fim, contador;
	
	std::cout << "Início: ";
	std::cin >> ini;
	std::cout << "Fim: ";
	std::cin >> fim;

	
	if (ini <= fim){
		contador = ini;
		while (contador <= fim){
			std::cout << contador << " ";
			contador++;	
		}
	}else if (ini >= fim){
		contador = ini;
		while (contador >= fim){
			std::cout << contador << " ";
			contador--;
		}
	}	
	
}
