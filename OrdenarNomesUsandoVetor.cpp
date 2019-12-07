#include<iostream>
#include<locale.h>
#include<string.h>
#define TAM 10

char nome[10][80];

int Ordena(){
	
	int i, j, c;
	char aux[80];
	
	for (i = 0; i < TAM-1; i++){
		for (j = i + 1; j < TAM; j++){
			c = strcmp (nome[i], nome[j]);
			if (c > 0){
				strcpy (aux, nome[i]);
				strcpy (nome[i], nome[j]);
				strcpy (nome[j], aux);				
			}
		}
	}
	
}


int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	int i;
	
	for (i = 0; i < TAM; i++){
		std:: cout << "Digite o " << i + 1 << "º nome: ";
		std::cin >> nome[i];
	}
	
	Ordena();
	
	for (i= 0; i < TAM; i++){
		std::cout << nome[i] << "\n";
	}
	
}
