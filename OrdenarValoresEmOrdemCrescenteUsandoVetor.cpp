#include<iostream>
#include<locale.h>
#include<stdbool.h>
#define TAM 10

int main (){
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, aux, vet[TAM];
	bool controle;
	
	
	for (i = 0; i < TAM; i++){
		std::cout << "Digite o " << i + 1 << "º número: ";
		std:: cin >> vet[i];		
	}
	
	for (i = 0; i < TAM-1; i++){
		controle = true;
		for (j = i + 1; j < TAM; j++){
			if (vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				controle = false;
			}	
		}
		if (controle){
			break;
		}
	}
	std::cout << "Valores ordenados em ordem crescente\n";
	for (i = 0; i < TAM; i++){
		std::cout << vet[i] << "\n";
	}
}
